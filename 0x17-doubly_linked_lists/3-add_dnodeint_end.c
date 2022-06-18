#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds node to end of doubly linked list
 * @head: pointer to head of list
 * @n: integer value of node
 * Return: Address of the new element
 */
/*dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (!current)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (current->next)
	{
		current = current->next;
	}
	current->next = new_node;
	new_node->prev = current;
	return (new_node);
}*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newnode;
	newnode->prev = temp;
	return (newnode);
}

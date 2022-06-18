#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: pointer to head node of list
 * @n: int variable to initialize new node
 *
 * Return: address of new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n, new_node->prev = NULL, new_node->next = *head;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}

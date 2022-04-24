#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* _strdup - main point
* @str: string to duplicate
*Return: pointer to the duplicate string
*/
char *_strdup(char *str)
{
	char *new;
	unsigned int i;
	int n;

	if (str == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n] != '\0'; n++)

	new = (char *) malloc(n + 1 * sizeof(char));
	if (new != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			new[i] = str[i];
	}
	else
	{
		return (NULL);
	}
	new[i] = '\0';
	return (new);
}

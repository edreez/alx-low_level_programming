#include <stdlib.h>
#include <stdio.h>
/**
* create_array - array of chars
* @c: number of character
* @size: number of character
*
*Return: nothing
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *t;

	if (size == 0)
	{
		return (NULL);
	}
	t = malloc(size * sizeof(char));
	if (t == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		t[i] = c;
		i++;
	}
	t[i] = '\0';
	return (t);
}

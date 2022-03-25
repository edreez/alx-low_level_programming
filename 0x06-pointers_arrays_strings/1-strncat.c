#include "main.h"

/**
 * _strncat - concantenates two strings
 *
 * @dest:destination
 * @src:source
 * @n:no. of bytes
 *
 * Return:pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	/*
	int i, length, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		lenght++;
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);*/
	int len, i;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
	{
		++len;
	}
	while (src[i] != 0 && i < n)
	{
		dest[len + i] = src[i];
		++i;
		++len;
	}
	dest[len] = '\0';
	return (dest);
}

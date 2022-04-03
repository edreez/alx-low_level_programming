#include "main.h"
/**
* strlen_recursion - using _putchar to print length  of a string.
* @s:string details; 
* Return: Always 0.
*/
int _strlen_recursion(char *s)
{
	/* Base Case */
	if (*s != '\0')
	{
	return(1 + _strlen_recursion(s + 1));
	}

	else
	{
		return (0);
	}
}
	

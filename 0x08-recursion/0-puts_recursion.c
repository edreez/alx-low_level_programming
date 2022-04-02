#include "main.h"
/**
* puts_recursion - using _putchar to print a string
* _puts_recursion : print with recursion;
* s : string details;
* 
* Return: Always 0
*/

void _puts_recursion(char *s)
{
	/* Base Case */

	if (*s != '\0')
		{
		_putchar (*s);
		  _puts_recursion(s + 1);
		}

	else
	{
		_putchar('\n');
	}
}

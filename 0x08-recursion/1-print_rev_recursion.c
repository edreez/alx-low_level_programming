#include "main.h"
/**
*_print_rev_recursion - printing reverse string
*@s: string to print
*@k: string to add
*Return: the reverse of the string
*/
void _print_rev_recursion(char *s);
{
int k;
	/* Base Case */
	if (*(s + k) == '\0')
	{
		return;
	}
	/* recursion for next character */
	reverse(s, k + 1);
	_putchar("%c", s[k]);
}

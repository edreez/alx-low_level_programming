#include "main.h"

/**
 * print_line - print line of any lenght
 * @n: length of line
 * Return: always (0)
 */

void print_line(int n)
{
	int x;

	if (n > 0)
		for (x = 0; x < n; x++)
			_putchar('_');

	_putchar('\n');
}

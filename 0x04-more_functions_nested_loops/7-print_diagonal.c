#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: length of line
 *
 * Return: Always (0)
 */

void print_diagonal(int n)
{
	int x = 0, y;

	if (n > 0)
	{
		while (x < n)
		{
			for (y = 0; y < x; y++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');

			x++;
		}
	}
	else
		_putchar('\n');
}

#include "main.c"

/**
 * print_most_numbers - prints 0-9 except 2 and 4
 *
 * Description:0-9 except 2 and 4
 *
 * Return:void
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			return();
		}
		else
		{
			_putchar(i + '0');
		}

	}
	_putchar('\n');
}

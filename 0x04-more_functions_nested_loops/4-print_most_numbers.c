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
	/*
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i !=4)
		{
			_putchar('0' + i);
		}

	}
	_putchar('\n');*/
	int x;

		for (x = 48; x < 58; x++)
				{
							if (x == 50 ||  x == 52)
											continue;
									else
													_putchar(x);
										}
			_putchar('\n');
}

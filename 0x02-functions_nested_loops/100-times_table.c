#include "main.h"
/**
 * n_times_table - prints times table
 */
void times_table(void)
{
	int x, y, z;


	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
		{
			if (y == 0)
			{
				_putchar(48);
				continue;
			}
			z = x * y;
			_putchar(',');
			_putchar(' ');
			if (z >= n)
			{
				_putchar(z / n + 48);
				_putchar(z % n + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(z + 48);
			}
		}
		_putchar('\n');
	}
}

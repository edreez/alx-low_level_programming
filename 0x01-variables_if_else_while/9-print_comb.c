#include <stdio.h>
/**
 * main - prints numbers
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			put ( );
		}
	}
	putchar('\n');
	return (0);
}


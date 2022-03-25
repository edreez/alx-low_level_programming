#include "main.h"

/**
 * puts_half - print half
 * @str: input string
 *
 * Description: prints half of a string
 * Return: Always (0);
 */

void puts_half(char *str)
{
	int i, length, half;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		half = length / 2;
		for (i = half; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		half = (length - 1) / 2;
		for (i = half + 1; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
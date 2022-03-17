#include "main.h"
/**
 * print_last_digit - to print the value of the last digit
 * @n: integer that is last digit is displayed
 * Return: lastdigit of number
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = _abs((n % 10));
	_putchar(last_digit + 48);
	return (last_digit);
}

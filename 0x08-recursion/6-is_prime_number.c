#include "main.h"
/**
* prime_test - print the power of a number.
*
* Description: print prime of a given integer.
* prime_test - to return negative value when n has no root
* @x: given integer
* @y: given integer
* Return: -1 if n is not equal to power of n
* the value of x and y if equal or greater than 1.
*/
int prime_test(int x, int y)
{
	if (x % y == 0 && x != y)
	{
		return (0);
	}
	if (x == y)
	{
		return (1);
	}
	else
	{
		return (prime_test(x, y + 1));
	}
}
#include "main.h"
/**
* is_prime_number - print the square root of a number.
*
* Description: print square root of a given integer.
* is_prime_number - to return negative value when n has no root
* @n: given integer
* Return: -1 if n is not equal to power of n
* the value of n if equal or greater than 1.
*/
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (prime_test(n, 2));
	}
}

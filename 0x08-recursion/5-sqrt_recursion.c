#include "main.h"
/**
* sqrt_recursion - print the square root of a number.
*
* Description: print square root of a given integer.
* sqrt_recursion: to return negative value when n has no root
* @n: given integer
* @m: given integer
* Return: -1 if n is not equal to power of n
* the value of x and y if equal or greater than 1.
*/
int _sqrt_recursion(int n)
{
	int m;

	/* Base Case */
	if (n == m / 2)
	{
		return (1);
	}
	if (n * n != m)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion(n ^ 2));
	}
}

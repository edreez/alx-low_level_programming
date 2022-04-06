#include "main.h"
/**
* test_power - print the power of a number.
*
* Description: print power of a given integer.
* test_power - to return negative value when n has no root
* @x: given integer
* @y: given integer
* Return: -1 if n is not equal to power of n
* the value of x and y if equal or greater than 1.
*/
int test_power(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	else
	{
		return (0 + test_power(x, (y + 1)));
	}
}
 #include "main.h"
/**
* _sqrt_recursion - print the square root of a number.
*
* Description: print square root of a given integer.
* _sqrt_recursion - to return negative value when n has no root
* @n: given integer
* Return: -1 if n is not equal to power of n
* the value of n if equal or greater than 1.
*/
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 1)
	{
		return (-1);
	}
	else
	{
		return (test_power(n, 1));
	}
}

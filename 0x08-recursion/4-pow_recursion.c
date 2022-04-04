#include "main.h"
/**
* _pow_recursion: print the value of a number.
*
* Description: print power of a given integer.
* raised to the power of another number
*_pow_recursion: to return negative value when y is less than 0
*
* @x: given integer
* @y: given integer
* Return: -1 if y is less than 0
* the value of x and y if equal or greater than 1. 
*/
int _pow_recursion(int x, int y)
{
	/* base case */
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

#include "main.h"
/**
* factorial: print the factorial of a number
*Description: to return negative value when it is less than 0
*
@n: n is the required integer.
* factorial: returning the factorial of a given integer.
*Return : Always 0
*/
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return n * factorial(n - 1);
}

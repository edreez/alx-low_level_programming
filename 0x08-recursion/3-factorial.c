#include "main.h"
/**
* factorial: print the factorial of a number
@n : the given integer
Return : 0
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

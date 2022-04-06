#include "main.h"
/**
* is_prime_number - print the value of a number.
* Description: print prime number of a given integer.
* raised to the power of another number
* is_prime_number: to return negative value when y is less than 0
* @n: given integer
* @i: given integer
* Return: -1 if y is less than 0
* the value of x and y if equal or greater than 1.
*/
int is_prime_number(int n)/* int i */
{
	/* base case */
	int i;

	i = 2;

	 /*(i = 2; i <= n / 2; i++) */
	{
	if (n % i == 0)
	{
		return (1);
	}
	else
	{
	if (n == i)
		return (0);
	}
	return (is_prime_number(n));
	}
	return (1);
}

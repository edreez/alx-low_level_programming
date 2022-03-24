#include "main.h"
/**
 * reverse_array - reverses the contents of an array of integers
 * @x: array of integers
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int counter = 0;

	while (counter < n / 2)
	{
		swap_int(a + counter, a + (n - counter - 1));

		counter++;
	}
}


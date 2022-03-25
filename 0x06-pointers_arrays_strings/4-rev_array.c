#include "main.h"
/**
 * reverse_array - reverses the contents of an array of integers
 * @x: array of integers
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int x, y, tmp;

	x = 0;
	y = n - 1;

	while (x < y)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y] = tmp;
		x++;
		y--;
	}
}

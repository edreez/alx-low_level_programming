#include "main.h"

/**
 * _isupper - checks if c is an uppercase letter
 *
 * @c: integer to test
 * REturn: 1 for true, 0 for false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}

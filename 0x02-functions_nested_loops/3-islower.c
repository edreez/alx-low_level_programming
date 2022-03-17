#include "main.h"
/**
 * _islower - check if a char is lower
 *@c: is a parameter for an argument
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

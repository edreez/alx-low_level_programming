#include <stdio.h>

/**
 * main - using sizeof to determine the sizes on my system
 *
 * Return: always (0)
 */
int main(void)
{
/*	int n;

	printf("Size of type 'char' on my computer: %lu bytes\n", sizeof(char));
	printf("Size of type 'int' on my computer: %lu bytes\n", sizeof(int));
	printf("Size of type 'float' on my computer: %lu bytes\n", sizeof(float));
	printf("Size of type of my variable n on my computer: %lu bytes\n", sizeof(n));

	return (0); */
/*	char c;
	int n;

	printf("Address of variable 'c': %p\n", &c);
	printf("Address of variable 'n': %p\n", &n);

	return (0); */
	int n;
	int *p;
	n = 98;
	p = &n;
	printf("Value of 'n': %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	*p = 402;
	printf("Value of 'n': %d\n", n);

	return (0);

}

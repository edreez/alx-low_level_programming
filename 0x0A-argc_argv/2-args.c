#include <stdio.h>
/**
* main - print all numbers of arguments
* @argc: count of the arguments supplied
* @argv: array of pointers to the strings
* Return: Always (0)
*/


int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	printf("%i\n", argc - 1);

	for (i = 0; i < argc; i++)

	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}

	return (0);
}

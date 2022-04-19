#include <stdio.h>
#include <stdlib.h>
/**
* main - print all numbers of arguments
* @argc: count of the arguments supplied
* @argv: array of pointers to the strings
* add: add the arguments supplied
* Return: Always (0)
*/


int main(int argc, char *argv[]/* __attribute__((unused))*/)
{
	unsigned int i, add = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	else if (argv != 0 - 9)
	{
	printf("%i\n");
	return (1);
	}
	for (i = 0; i < argc; i++)
	{
	add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}

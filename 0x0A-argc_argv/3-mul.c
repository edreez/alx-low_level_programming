#include <stdio.h>
#include <stdlib.h>
/**
* main - print all numbers of arguments
* @argc: count of the arguments supplied
* @argv: array of pointers to the strings
* mul: multiply the arguments supplied
* Return: Always (0)
*/


int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
	/*
	*	{
	*	printf("%s\n", argv[i]);
	*	}
	* mul += (char argv[i]);
	* printf("Total = %d\n", mul);
	* return (0);
	* if (argc != 3)
	* {
	*	printf("Error\n");
	*	return (1);
	* }
	* printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	*
	* return (0);
	*/
}

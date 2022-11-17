#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print arguments given to a function without argc
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	int count = 0;

	while (argv[count])
	{
		printf("argv[%d]: %s\n", count, argv[count]);
		count++;
	}

	return (0);
}

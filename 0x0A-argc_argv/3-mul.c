#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n, m, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	m = atoi(argv[2]);
	mul = n * m;

	printf("%i\n", mul);

	return (0);
}

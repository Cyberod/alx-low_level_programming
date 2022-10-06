#include <stdio.h>
#include <stdlib>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: takes integer variable that holds the memory size
 * Return: Always 0 (success)
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
		exit 98);
	return (p);
}

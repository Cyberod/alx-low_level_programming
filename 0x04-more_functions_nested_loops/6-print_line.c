#include <stdio.h>
#include "main.h"

/**
 * print_line -> prints line in the terminal
 * @n: parameter
 * Return: returns nothing
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar(' ');
	}
	putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
 * print_number - prints a number
 * @n: The number to print
 * Return: returns a number
 */

void print_number(int n)
{
	unsigned int d = n;

	if (n < 0)
	{
		putchar('-');
		d = -d;
	}
	if ((d / 10) > 0)
	{
		print_number(d / 10);
	}
	putchar ((d % 10) + '0');
	
}

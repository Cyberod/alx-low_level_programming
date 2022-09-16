#include "main.h"
#include <stdio.h>

/**
 * print_number - prints a number
 * @n: The number to print
 * Return: returns a number
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}
	if (num > 0)
	{
		print_number(num / 10);
	}
	putchar(num % 10 + '0');
}
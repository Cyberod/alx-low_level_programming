#include "main.h"

/**
 *print_last_digit -> returns the last digit of a number
 * @n: Takes a parameter
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}

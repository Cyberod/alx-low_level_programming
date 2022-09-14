#include "main.h"

/**
 *print_last_digit -> returns the last digit of a number
 * @n: Takes a parameter
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		x = (-1 * (n % 10));
		_putchar(x + '0');
		return (x);
	}
	else
	{
		x = (n % 10);
		_putchar(x + '0');
		return (x);
	}
}

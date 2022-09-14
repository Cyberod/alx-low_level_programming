#include "main.h"

/**
 * jack_bauer -> prints 24 hours
 * Returns: Always 0 (Sucess)
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar ((a / 10) + '0');
			_putchar ((a % 10) + '0');
			_putchar (':');
			_putchar ((b / 10) + '0');
			_putchar ((b % 10) + '0');
			_putchar ('\n');
		}
	}
}

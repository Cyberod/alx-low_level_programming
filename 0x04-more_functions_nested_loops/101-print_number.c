#include "main.h"

/**
 * print_number - prints an integer
 * @n: param
 */
void print_number(int n)
{
        unsigned int i, j, count;

<<<<<<< HEAD
	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
		i = n;
	}
=======
        if (n < 0)
        {
                _putchar(45);
                i = n * -1;
        }
        else
                i = n;
        }
>>>>>>> 1f3baff7e959ba47c68ec825a98c902e2a51c20c

        j = i;
        count = 1;

        while (j > 9)
        {
                j /= 10;
                count *= 10;
        }

<<<<<<< HEAD
	for (; count >= 1; count /= 10)
	{
		_putchar(((i / count) % 10) + 48);
	}
	putchar ((d % 10) + '0');
=======
        for (; count >= 1; count /= 10)
        {
                _putchar(((i / count) % 10) + 48);
        }
        putchar ((d % 10) + '0');
>>>>>>> 1f3baff7e959ba47c68ec825a98c902e2a51c20c
}

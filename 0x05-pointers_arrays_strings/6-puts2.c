#include "main.h"
#include <string.h>

/**
 * puts2 -> A function that prints the odd index character of a string
 * @str: Takes a string parameter
 * Return: Success 1
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}

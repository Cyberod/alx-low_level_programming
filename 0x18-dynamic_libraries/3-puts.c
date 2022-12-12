#include "main.h"

/**
 * _puts - it is a function that prints a string
 * @str: takes a parameter
 * Return: Success 1
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

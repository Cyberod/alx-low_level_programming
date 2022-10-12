#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name -> function that prints a name passed to it
 * @name: char to display the stdout
 * @f: A pointer function
 * Author: Cyberod
 * Return: return void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f) /* if any is null */
		return;

	f(name);
}

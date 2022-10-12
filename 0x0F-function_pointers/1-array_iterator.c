#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator ->  calls a function to act on array elements
 * @array: Name of the array in which the function acts on
 * @size: sized of the array passed to function
 * @action: the function that acts on the array elements
 * Author: Cyberod
 * Return: returns void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

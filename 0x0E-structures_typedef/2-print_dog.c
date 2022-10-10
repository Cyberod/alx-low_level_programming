#include <stdio.h>
#include "dog.h"

/**
 * print_dog -> prints the elements of struct dog
 * @d: pointer to the elements of str=uct dog
 * Return: void
 * Author: cyberod
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)");
		}
		else
		{
			printf("Name: %s\n", name);
		}

		printf("Age: %d\n", age);

		if (d->owner == NULL)
		{
			printf("Owner: (nil)");
		}
		else
		{
			printf("Owner: %s\n", owner);
		}

	}
}

#include "dog.h"
/**
 * init_dog -> initializes a variable of type struct dog
 * @d: ponter for derefrencing
 * @name: pointer to the name of the dog
 * @age: Age of the dog
 * @owner: pointer to the owner of the dog
 * Author: Jonaz
 * Return: Always 0 (success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

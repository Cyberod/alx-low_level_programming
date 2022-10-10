#ifndef DOG_H
#define DOG_H
/**
 * struct dog -> user defined data type
 * @name: name of the dog
 * @age: Age of the dog
 * @owner: The owner of the dog
 * Author: Jonaz
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;
#endif /* DOG_H */
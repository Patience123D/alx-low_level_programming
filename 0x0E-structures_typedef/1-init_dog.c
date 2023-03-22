#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer of struct dog to be initialized
 * @name: name of the dog that is intialized
 * @age: age of the dog to be intialized
 * @owner: owner of the dog to be intialized
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));

		d->name = name;
		d->age = age;
		d->owner = owner;
}

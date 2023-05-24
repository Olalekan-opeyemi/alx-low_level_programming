#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - allocated memory of struct dog to be freed
 * @d: struct dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}

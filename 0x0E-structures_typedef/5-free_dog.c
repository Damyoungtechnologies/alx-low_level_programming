#include <stdlib.h>
#include "dog.h"

/**
* free_dog - free memo for allocation - struct dog
* @d: struct dog to free to free the memoru
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

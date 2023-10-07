#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - for malloc memory allocation
 * @b: number of bytes
 *
 * Return: a pointer to the allocated memory just the way mallock works
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

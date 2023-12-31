#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array
 * @array: array
 * @size: how many elem to print out
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int h;

	if (array == NULL || action == NULL)
		return;

	for (h = 0; h < size; h++)
	{
		action(array[h]);
	}
}

#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: linked list of type listint_t to traverse
 *
 * Return: returns sweet
 */
size_t listint_len(const listint_t *h)
{
	size_t sweet = 0;

	while (h)
	{
		sweet++;
		h = h->next;
	}

	return (sweet);
}

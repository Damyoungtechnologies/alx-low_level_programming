#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: retuns node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}


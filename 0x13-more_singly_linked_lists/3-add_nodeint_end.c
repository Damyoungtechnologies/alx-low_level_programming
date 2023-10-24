#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lots;
	listint_t *town = *head;

	lots = malloc(sizeof(listint_t));
	if (lots == NULL)
	return (NULL);

	lots->n = n;
	lots->next = NULL;

	if (*head == NULL)
{
	*head = lots;
	return (lots);
}

	while (town->next)
	town = town->next;

	town->next = lots;

	return (lots);
}

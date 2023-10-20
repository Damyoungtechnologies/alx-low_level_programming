#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *old;
	list_t *rate = *head;
	unsigned int len = 0;

	while (str[len])
	len++;

	old = (list_t *)malloc(sizeof(list_t));
	if (!old)
		return (NULL);

	old->str = strdup(str);
	old->len = len;
	old->next = NULL;

if (*head == NULL)
{
	*head = old;
	return (old);
}

	while (rate->next)
	rate = rate->next;
	rate->next = old;
return (old);
}

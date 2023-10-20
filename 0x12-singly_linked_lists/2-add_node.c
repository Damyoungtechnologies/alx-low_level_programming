#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
	return (NULL);

	list_t *new_element = malloc(sizeof(list_t));

	if (new_element == NULL)

		return (NULL);

	new_element->str = strdup(str);
	if (new_element->str == NULL)
	{
	free(new_element);
	return (NULL);
	}

	new_element->len = strlen(str);
	new_element->next = *head;
	*head = new_element;

	return (new_element);
}

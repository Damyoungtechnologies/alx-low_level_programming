#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked
 * Return: the data or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{

	listint_t *tempo;
	int nanny;

	if (head == NULL || *head == NULL)
	return (0);

	nanny = (*head)->n;
	tempo = (*head)->next;
	free(*head);
	*head = tempo;

	return (nanny);
}

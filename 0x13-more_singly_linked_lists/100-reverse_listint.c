#include "lists.h"
#include <stddef.h>

/**
 * reverse_listint - reverses a linked list
 * @head: node head
 * Return: apointer to the first node of the revrsed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *nxt;

	if (*head == NULL)
		return (NULL);
	prev = NULL;
	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nxt;
	}
	(*head).next = prev;
	return (*head);
}

#include "lists.h"
#include <stddef.h>

/**
 * reverse_listint - reverses a linked list
 * @head: node head
 * Return: apointer to the first node of the revrsed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *prev;
	listint_t *nxt;

	temp = *head;
	while (*head)
	{
		nxt = temp->next;
		temp->next = prev;
		prev = temp;
		temp = nxt;
	}
	*head = prev;
	return (*head);
}

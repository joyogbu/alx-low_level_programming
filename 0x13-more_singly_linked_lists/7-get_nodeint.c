#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: node head
 * @index: node position
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	temp = head;
	if (head == NULL)
		return (NULL);
	if (index == 0)
	{
		return (head);
	}
	for (i = 0; temp != NULL && i < index - 1; i++)
	{
		if (index > i)
			return (NULL);
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL)
		return (NULL);
	return (temp);
}

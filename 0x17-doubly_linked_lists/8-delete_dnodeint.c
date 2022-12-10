#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @index: index of node to be deleted
 * Return: 1 on success otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *del;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		temp->next = NULL;
		temp->prev = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; temp != NULL && i < index - 1; i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	del = temp->next;
	temp->next = temp->next->next;
	del->next = NULL;
	free(del);
	return (1);
}

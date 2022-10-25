#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * pop_listint - function that deletes head  node of a listint_t list
 * and returns the head node data
 * @head: head node
 * Return: head node n data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;


	if (*head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	*head = temp->next;
	free(temp);

	return (n);
}

#include "main.h"
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
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	return (head);
}

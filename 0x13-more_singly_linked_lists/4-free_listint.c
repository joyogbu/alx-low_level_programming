#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list
 * @head: list head node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

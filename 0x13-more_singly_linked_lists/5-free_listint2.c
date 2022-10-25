#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees a listint_t list
 * and sets the head to null
 * @head: list node head
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head)
	{
		temp = *head;
		free(temp);
		*head = NULL;
	}
}

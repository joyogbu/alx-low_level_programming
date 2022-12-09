#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: head node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	dlistint_t *curr;

	tmp = head;
	while (tmp)
	{
		/*free(tmp->n);*/
		curr = tmp->next;
		free(tmp);
		tmp = curr;
	}
}

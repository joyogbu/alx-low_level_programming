#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * free_list - function that frees list_t list
 * @head: list heas node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}

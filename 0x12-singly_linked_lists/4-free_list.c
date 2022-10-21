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
	list_t *nxt;

	temp = head;
	while (temp != NULL)
	{
		nxt = temp->next;
		free(temp->str);
		free(temp);
		temp = nxt;
	}
	head = NULL;
}

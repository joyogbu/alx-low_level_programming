#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * free_list - function that frees list_t list
 * @h: list heas node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;
	/** temp = (list_t *)malloc(sizeof(list_t)); **/
	while(head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}

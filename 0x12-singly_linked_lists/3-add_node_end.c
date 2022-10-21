#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node_end - function that adds a node to the end of l8snked list
 * @head: pointer to the head pointer
 * @str: malloc'd str
 * Return: addrees of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last = *head;
	list_t *new_node;
	char *result;
	int i = 0;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	result = strdup(str);
	new_node->str = result;
	while (str[i] != '\0')
		i++;
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (last);
}

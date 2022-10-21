#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that adds new node at the beginning of a list lis_t
 * @head: pointer to the head node
 * @str: malloc'ed string
 * Return: address of the new elemrnt or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
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
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}

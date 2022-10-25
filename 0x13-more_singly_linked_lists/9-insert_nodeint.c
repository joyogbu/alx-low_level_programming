#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: list head node
 * @idx: new node index position
 * @n: list data element
 * Return: addree of the new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp;
	unsigned int i;

	i = 0;
	temp = *head;
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL || idx == 0)
	{
		new_node->n =n;
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	for (i = 0; temp != NULL && i < idx - 1; i++)
	{
		temp = temp->next;
	}
	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}

#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - print the elements of a dlistint_t list
 * @head: head node
 * Return: list elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while(h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}

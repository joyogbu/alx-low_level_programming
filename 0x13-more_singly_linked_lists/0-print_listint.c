#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - function thst prints all the elements of a listint list
 * @h: head node
 * Return: numberbof nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}

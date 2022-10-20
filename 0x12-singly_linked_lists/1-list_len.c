#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - returns the number of elements in linked list list_t
 * @h: head node to start from
 * Return: length of the list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

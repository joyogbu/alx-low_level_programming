#include "lists.h"
#include  <stdio.h>
#include <stddef.h>
/**
 * listint_len - returns the number of elements in a listint list
 * @h: head node
 * Return : number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

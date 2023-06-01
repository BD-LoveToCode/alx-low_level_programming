#include <stdlib.h>
#include "lists.h"

/**
 * list_len - linked list elements no
 * @h: list_t list
 * Return: element number in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

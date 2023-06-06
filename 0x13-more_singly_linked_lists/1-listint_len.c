#include "lists.h"

/**
 * listint_len - linked lists elements
 * @h: type of linked list
 * Return: num nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

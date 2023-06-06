#include "lists.h"

/**
 * free_listint - freeclinked list
 * @head: listint_t list head
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

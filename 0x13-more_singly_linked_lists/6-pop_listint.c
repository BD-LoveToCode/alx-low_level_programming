#include "lists.h"

/**
 * pop_listint - delete the first element from a linked list
 * @head: first element
 * Return: deleted data, else 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

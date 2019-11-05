#include "lists.h"
/**
 * free_listint - Function that frres a list
 * @head: list
 * Return : NULL
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	if (head == NULL)
	{
		return;
	}
	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}

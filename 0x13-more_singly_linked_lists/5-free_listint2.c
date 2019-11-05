#include "lists.h"
/**
 * free_listint2 - Function that frees
 * @head: list
 * Return : Null
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		node = *head;
		*head = node->next;
		free(node);
	}
}

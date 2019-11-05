#include "lists.h"
/**
 * pop_listint - Function that deletes the head
 * @head: list
 * Return: head node's
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int c;

	node = *head;
	if (node == NULL)
	{
		return (0);
	}
	c = node->n;
	*head = node->next;
	free(node);
	return (c);
}

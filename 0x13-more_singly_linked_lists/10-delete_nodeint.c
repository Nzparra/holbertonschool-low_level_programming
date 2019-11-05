#include "lists.h"
/**
 * delete_nodeint_at_index - Write a function that deletes the node at index
 * @head: Head
 * @index : Index
 * Return: 1 if ok else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *new;
	unsigned int c;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (-1);
	}
	for (c = 0; node && c < index - 1; c++)
	{
		node = node->next;
	}
	if (node == NULL || node->next == NULL)
	{
		return (-1);
	}
	new = node->next->next;
	free(node->next);
	node->next = new;
	return (1);
}

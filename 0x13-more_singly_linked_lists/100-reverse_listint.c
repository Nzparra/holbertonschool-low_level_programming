#include "lists.h"
/**
 * reverse_listint - Function that reverse
 * @head: Head
 * Return: Pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = *head;
	listint_t *last = NULL;
	listint_t *new = NULL;

	if (*head == NULL)
	{
		return (NULL);
	}
	while (node)
	{
		new = node->next;
		node->next = last;
		last = node;
		node = new;
	}
	*head = last;
	return (new);
}

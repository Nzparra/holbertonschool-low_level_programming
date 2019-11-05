#include "lists.h"
/**
 * reverse_listint - Function that reverse
 * @head: Head
 * Return: Pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = *head;
	listint_t *new;

	if (node == NULL)
	{
		return (NULL);
	}
	new = node->next;
	node->next = NULL;
	while (new)
	{
		node = new;
		new = new->next;
		node->next = *head;
		*head = node;
	}
	return (*head);
}

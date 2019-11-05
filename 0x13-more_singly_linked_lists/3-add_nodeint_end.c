#include "lists.h"
/**
 * add_nodeint_end - Function that adds a new node at the end
 * @head: list
 * @n: number to add
 * Return: Pointer of head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (node->next)
	{
		node = node->next;
	}
	node->next = new_node;
	return (*head);
}

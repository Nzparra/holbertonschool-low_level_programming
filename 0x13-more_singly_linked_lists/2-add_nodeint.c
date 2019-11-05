#include "lists.h"
/**
 * add_nodeint - Function that adds a new node at the beginning
 * @n: Number to add
 * @head: head
 * Return: Node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}

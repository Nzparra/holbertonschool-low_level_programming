#include "lists.h"
/**
 * insert_nodeint_at_index - Function that inserts a new node
 * @head: Head
 * @idx : Index
 * @n : Int
 * Return: The addres of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *new;
	unsigned int c;

	if (head == NULL)
	{
		return (NULL);
	}
	node = *head;
	c = 1;
	while (node && c < idx)
	{
		node = node->next;
		if (node == NULL)
		{
			return (NULL);
		}
		c++;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{ free(new);
		return (NULL); }
	new->n = n;
	if (idx == 0)
	{
		new->next = node;
		*head = new;
	}
	else if (node->next)
	{
		new->next = node->next;
		node->next = new;
	}
	else
	{
		new->next = NULL;
		node->next = new;
	}
	return (new);
}

#include "lists.h"
/**
 * free_listint_safe - Function that frees liked list
 * @h: Head
 * Return: The number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *node;
	listint_t *new;
	size_t c = 0;

	node = *h;
	while (node)
	{
		new = node;
		node = node->next;
		free(node);
		c++;
		if (new < node)
		{
			break;
		}
	}
	*h = NULL;
	return (c);
}

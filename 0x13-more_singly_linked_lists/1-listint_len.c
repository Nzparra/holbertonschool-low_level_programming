#include "lists.h"
/**
 * listint_len - Function that returns the number of elements
 * @h: list
 * Return: Node
 */
size_t listint_len(const listint_t *h)
{
	size_t node;

	node = 0;
	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}

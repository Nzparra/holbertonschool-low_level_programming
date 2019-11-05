#include "lists.h"
/**
 * print_listint - Function that prints all the elements of a list
 * @h: list
 * Return: Node
 */
size_t print_listint(const listint_t *h)
{
	size_t node;

	node = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}

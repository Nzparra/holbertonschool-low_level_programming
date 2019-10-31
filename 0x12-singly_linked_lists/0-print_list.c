#include "lists.h"
/**
 * print_list - Function thar prints all the elements of a list
 * @h: list
 * Return: Node
 **/
size_t print_list(const list_t *h)
{
	size_t node;

	node = 0;
	while (h)
	{
		printf(h->str == NULL ? "[%d] %p\n" : "[%d] %s\n", h->len, h->str);
		h = h->next;
		node++;
	}
	return (node);
}

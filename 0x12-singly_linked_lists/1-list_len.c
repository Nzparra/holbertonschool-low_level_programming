#include "lists.h"
/**
 * list_len - Function that returns the number of elem
 * @h : List
 * Return: node
 **/
size_t list_len(const list_t *h)
{
	size_t node;

	node = 0;
	for (node = 0; h; h = h->next, node++)
	{}
	return (node);
}

#include "lists.h"
/**
 * dlistint_len - Count the nomber of nodes
 * @h : Pointer in list
 * Return: Number of node in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t pox;
	const dlistint_t *tmp;

	tmp = h;
	while (tmp && tmp->prev)
	{
		tmp = tmp->prev;
	}
	for (pox = 0; tmp; tmp = tmp->next, pox++)
	{}
	return (pox);
}

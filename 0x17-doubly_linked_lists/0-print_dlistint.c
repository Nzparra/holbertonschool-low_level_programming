#include "lists.h"
/**
 * print_dlistint - Print all value in the list
 * @h : Pointer in list
 * Return: Number of node in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t pox;
	const dlistint_t *tmp;

	tmp = h;
	while (tmp && tmp->prev)
	{
		tmp = tmp->prev;
	}
	for (pox = 0; tmp; tmp = tmp->next, pox++)
	{
		printf("%d\n", tmp->n);
	}
	return (pox);
}

#include "lists.h"
/**
 * get_dnodeint_at_index - Get the n node
 * @head: head of list
 * @index: index to return
 * Return: index or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int c;

	tmp = head;
	for (c = 0; index > c && tmp; tmp = tmp->next, c++)
	{}
	return (tmp);
}

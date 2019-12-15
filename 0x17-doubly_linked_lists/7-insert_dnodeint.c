#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node
 * @h:  Pointer to head
 * @idx : index
 * @n: value
 * Return: Address or NUll
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *cpy, *prv;
	unsigned int c;

	cpy = malloc(sizeof(dlistint_t));
	if (cpy == NULL)
		return (NULL);
	cpy->n = n;
	tmp = *h;
	for (c = 1; tmp && idx > c; c++, tmp = tmp->next)
		prv = tmp;
	if (idx == 0)
	{ *h = cpy;
		cpy->prev = NULL;
		cpy->next = (tmp == NULL) ? NULL : tmp;
		return (cpy); }
	if (idx == 1)
	{ prv = *h;
		tmp = ((*h)->next == NULL) ? NULL : (*h)->next;
		cpy->prev = prv;
		cpy->next = tmp;
		prv->next = cpy;
		if (tmp)
			tmp->prev = cpy;
		return (cpy); }
	if (tmp == NULL && c == idx)
	{
		if (prv)
		{ cpy->prev = prv;
			cpy->next = NULL;
			prv->next = cpy;
			return (cpy); }
		free(cpy);
		return (NULL); }
	else if (tmp == NULL && c != idx)
	{ free(cpy);
		return (NULL); }
	prv = tmp;
	tmp = tmp->next;
	cpy->prev = prv;
	cpy->next = tmp;
	prv->next = cpy;
	tmp->prev = cpy;
	return (cpy);
}

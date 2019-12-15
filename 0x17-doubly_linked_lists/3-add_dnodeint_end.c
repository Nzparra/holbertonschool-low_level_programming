#include "lists.h"
/**
 * add_dnodeint_end - Add a node at end of the list
 * @head : Pointer to Pointer to head in list
 * @n: value
 * Return: Address, or NUll
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *cpy;

	tmp = *head;
	cpy = malloc(sizeof(dlistint_t));
	if (cpy == NULL)
	{
		return (NULL);
	}
	cpy->n = n;
	cpy->next = NULL;
	while (tmp && tmp->next)
	{
		tmp = tmp->next;
	}
	if (tmp)
	{
		cpy->prev = tmp;
		tmp->next = cpy;
	}
	else
	{
		*head = cpy;
		cpy->prev = NULL;
	}
	return (cpy);
}

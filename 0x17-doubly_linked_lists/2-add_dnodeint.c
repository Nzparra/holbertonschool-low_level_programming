#include "lists.h"
/**
 * add_dnodeint - Add a node at start of the list
 * @head : Pointer to Pointer to head in list
 * @n: value
 * Return: Address, or NUll
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *cpy;

	tmp = *head;
	cpy = malloc(sizeof(dlistint_t));
	if (cpy == NULL)
	{
		return (NULL);
	}
	cpy->n = n;
	cpy->prev = NULL;
	if (tmp == NULL)
	{
		cpy->next = NULL;
	}
	else
	{
		while (tmp->prev)
		{
			tmp = tmp->prev;
		}
		tmp->prev = cpy;
		cpy->next = tmp;
	}
	*head = cpy;
	return (*head);
}

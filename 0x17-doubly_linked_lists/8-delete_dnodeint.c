#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete a node in list
 * @head:  Pointer to head
 * @index : index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *cpy, *prv;
	unsigned int c;

	if (*head == NULL)
	{
		return (-1);
	}
	tmp = *head;
	prv = NULL;
	for (c = 0; tmp && index > c; c++, tmp = tmp->next)
		prv = tmp;
	if (tmp == NULL)
	{
		return (-1);
	}
	cpy = tmp->next;
	if (prv == NULL)
	{
		free(tmp);
		if (cpy != NULL)
		{
			cpy->prev = NULL;
			*head = cpy;
		}
		else
		{
			*head = NULL;
		}
	}
	else if (cpy == NULL)
	{
		prv->next = NULL;
		free(tmp);
	}
	else
	{ prv->next = cpy;
		cpy->prev = prv;
		free(tmp); }
	return (1);
}

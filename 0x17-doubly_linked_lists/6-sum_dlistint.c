#include "lists.h"
/**
 * sum_dlistint - Get the sum
 * @head: head of list
 * Return: Sum of n in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int add;
	dlistint_t *tmp;

	tmp = head;
	for (add = 0; tmp; tmp = tmp->next)
	{
		add += tmp->n;
	}
	return (add);
}

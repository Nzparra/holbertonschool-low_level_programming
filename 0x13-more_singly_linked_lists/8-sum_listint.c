#include "lists.h"
/**
 * sum_listint - Function that returns the sum of all the datta
 * @head: list
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	int c;

	c = 0;
	while (head)
	{
		c += head->n;
		head = head->next;
	}
	return (c);
}

#include "lists.h"
/**
 * get_nodeint_at_index - Function that returns nth node
 * @head: list
 * @index: index of the node
 * Return: head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c;

	c = 0;
	while (c != index)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
		c++;
	}
	return (head);
}

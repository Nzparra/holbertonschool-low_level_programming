#include "lists.h"
/**
 * print_listint_safe - Function that prints liked list
 * @head: Head
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node;
	const listint_t *new;
	size_t c = 0;

	node = head;
	if (node == NULL)
	{
		exit(98);
	}
	while (node)
	{
		new = node;
		node = node->next;
		printf("[%p] %d\n", (void *)new, new->n);
		c++;
		if (new < node)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			break;
		}
	}
	return (c);
}

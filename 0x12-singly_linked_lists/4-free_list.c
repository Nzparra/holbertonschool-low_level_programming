#include "lists.h"
/**
 * free_list - Function that frees
 * @head: head
 **/
void free_list(list_t *head)
{
	list_t *node;

	if (head == NULL)
	{
		return;
	}
	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}

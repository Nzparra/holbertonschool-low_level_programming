#include "lists.h"
/**
 * add_node_end - Function that adds a new node at the begginning of a list
 * @head : Dir
 * @str : New element
 * Return: Address of new element
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = *head;
	list_t *new_node;
	int size;

	for (size = 0; str[size]; size++)
	{}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = size;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (node->next)
	{
		node = node->next;
	}
	node->next = new_node;
	return (*head);
}

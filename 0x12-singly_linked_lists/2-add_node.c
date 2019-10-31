#include "lists.h"
/**
 * add_node - Function that adds a new node at the begginning of a list
 * @head : Dir
 * @str : New element
 * Return: Address of new element
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int size;

	for (size = 0; str[size]; size++)
	{}
	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->str = strdup(str);
	node->len = size;
	node->next = *head;
	*head = node;
	return (node);
}

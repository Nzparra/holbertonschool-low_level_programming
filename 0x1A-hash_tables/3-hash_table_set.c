#include "hash_tables.h"
/**
 * hash_table_set - Return a index of key
 * @ht: key
 * @key: size
 * @value: value
 * Return: index
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int id;
	hash_node_t *new, *save;

	if (ht == NULL || value == NULL || key == NULL)
	{
		return (0);
	}
	id = key_index((const unsigned char *)key, ht->size);
	save = ht->array[id];
	if (save)
	{
		while (save)
		{
			if (strcmp(save->key, key) == 0)
			{
				save->value = strdup(value);
				return (1);
			}
			save = save->next;
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (0);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	if (ht->array[id] != NULL)
	{
		new->next = ht->array[id];
	}
	ht->array[id] = new;
	return (1);
}

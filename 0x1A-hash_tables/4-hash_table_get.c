#include "hash_tables.h"
/**
 * hash_table_get - Return a index of key
 * @ht: key
 * @key: size
 * Return: index
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *save;
	unsigned long int id;

	if (key == NULL || ht == NULL)
	{
		return (NULL);
	}
	id = key_index((const unsigned char *)key, ht->size);
	save = ht->array[id];
	if (save == NULL)
	{
		return (NULL);
	}
	while (strcmp(save->key, key) != 0)
	{
		save = save->next;
	}
	if (save == NULL)
	{
		return (NULL);
	}
	return (save->value);
}

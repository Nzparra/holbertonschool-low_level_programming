#include "hash_tables.h"
/**
 * hash_table_create - Create hash table
 * @size: size
 * Return: new table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int c;

	if (size == 0)
	{
		return (NULL);
	}
	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
	{
		return (NULL);
	}
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}
	hash->size = size;
	for (c = 0; c < size; c++)
	{
		hash->array[c] = NULL;
	}
	return (hash);
}

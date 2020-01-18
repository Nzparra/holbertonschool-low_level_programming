#include "hash_tables.h"
/**
 * hash_table_delete - Return a index of key
 * @ht: key
 * Return: index
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int c, d;
	hash_node_t *save, *last;

	if (ht == NULL)
	{
		return;
	}
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	for (c = 0, d = ht->size; c < d; c++)
	{
		save = ht->array[c];
		while (save)
		{
			last = save;
			save = save->next;
			free(last->key);
			free(last->value);
			free(last);
		}
	}
	free(ht->array);
	free(ht);
}

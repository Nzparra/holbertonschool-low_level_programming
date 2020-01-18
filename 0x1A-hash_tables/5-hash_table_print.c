#include "hash_tables.h"
/**
 * hash_table_print - Return a index of key
 * @ht: key
 * Return: index
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int c;
	int d;
	hash_node_t *save;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (c = 0, d = 0; c < ht->size; c++)
	{
		save = ht->array[c];
		if (save)
		{
			if (d == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", save->key, save->value);
			while ((save = save->next) != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", save->key, save->value);
			}
			d = 1;
		}
	}
	printf("}\n");
}

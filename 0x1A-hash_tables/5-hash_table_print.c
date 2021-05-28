#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table to print
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *collision = NULL;
	unsigned long int i = 0;
	int is_empty = 0;

	if (!ht || !ht->array)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			/*look for collisions*/
			collision = ht->array[i];
			while (collision)
			{
				if (is_empty == 0)
				{
					printf("'%s': '%s'", collision->key, collision->value);
					is_empty = 1;
				}
				else
					printf(", '%s': '%s'", collision->key, collision->value);
				collision = collision->next;
			}
		}
		i++;
	}
	printf("}\n");
}

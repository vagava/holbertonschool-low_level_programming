#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table to print
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *aux = NULL;
	unsigned long int i = 0;
	int is_empty = 0;

	if(!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (is_empty == 0)
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			else
				printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			aux = ht->array[i]->next;
			while(aux)
			{
				printf(", '%s': '%s'", aux->key, aux->value);
				aux = aux->next;
			}
			is_empty = 1;
		}
		i++;
	}
	printf("}\n");
}

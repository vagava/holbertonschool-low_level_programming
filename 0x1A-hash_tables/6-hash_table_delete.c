#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table to delete
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *del = NULL;

	unsigned long int i = 0;

	while(i < ht->size)
	{
		if(ht->array[i] != NULL)
		{
			while(ht->array[i]->next)
			{
				del = ht->array[i];
				ht->array[i] = ht->array[i]->next;
				free(del);
			}
			/*free(ht->array[i]);*/
		}
		free(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht);
}

#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table to delete
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux = NULL;
	hash_node_t *collision = NULL;
	unsigned long int i = 0;

	if (!ht)
		return;
	if (!ht->array || ht->size == 0)
	{
		free(ht);
		return;
	}

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			collision = ht->array[i];
			while (collision)
			{
				aux = collision->next;
				free(collision->key);
				free(collision->value);
				free(collision);
				collision = aux;
			}
			/*free(collision);*/
		}
		/*free(ht->array[i]);*/
		i++;
	}
	free(ht->array);
	free(ht);
}

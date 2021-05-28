#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: length of table
 * Return: pointer to new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i = 0;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = (malloc(sizeof(hash_node_t*) * (table->size)));
	if (!table->array)
	{
		/*free(table);*/
		return (NULL);
	}
	while (i < size) /*inicialize the array*/
	{
		table->array[i] = NULL;
		i++;
	}
	return (table);
}

#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table to add or update the key/value
 * @key: is the key. key can not be an empty string.
 * @value:  is the value associated with the key. value must be duplicated.
 * value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *new_value = NULL;
	unsigned long int index = 0;
	hash_node_t *node = NULL, *colision = NULL;

	/*validations to table*/
	if (!ht || !ht->array || ht->size == 0)
		return (0);
	/*validations to key an value*/
	if (!key || (strcmp(key, "") == 0) || !value)
		return (0);
	/*search the index*/
	index = key_index((const unsigned char *)key, ht->size);
	/*compare key if colision*/
	colision = ht->array[index];
	while (colision)
	{
		if (strcmp(colision->key, key) == 0);
		{
			new_value = strdup(value);
			if(!new_value)
				return (0);
			colision->value = new_value;
			return (1);
		}
		colision = colision->next;
	}
	/*not found key then insert node*/
	node = insert_node(ht, key, value, index);
	if (!node)
		return (0);
	return (1);
}
/**
 * insert_node - insert node at the start
 * @ht: is the hash table to add or update the key/value
 * @key: is the key. key can not be an empty string.
 * @value:  is the value associated with the key. value must be duplicated.
 * value can be an empty string
 * @index: index of array to insert node
 * Return: 1 if it succeeded, 0 otherwise
 */
hash_node_t *insert_node(hash_table_t *ht, const char *key, const char *value, unsigned long int index)
{
	hash_node_t *node = NULL;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);

	node->key = (char *)key;
	node->value = (char *)value;
	node->next = NULL;


	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}

	return (node);
}




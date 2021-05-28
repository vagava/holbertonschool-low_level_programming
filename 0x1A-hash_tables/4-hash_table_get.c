#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table to look into
 * @key: is the key you are looking for
 * Return: value associated with the element, or NULL if key couldn’t
 * be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value = NULL;
	hash_node_t *collision = NULL;
	unsigned long int index = 0;

	if (!ht || !ht->array || !key || (strcmp(key, "") == 0))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[index])
		return (NULL);
	/*look for collisions*/
	collision = ht->array[index];
	while (collision)
	{
		if (strcmp(collision->key, key) == 0)
			value = collision->value;
		collision = collision->next;
	}
	return (value);
}

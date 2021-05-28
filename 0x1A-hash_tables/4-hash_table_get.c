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
	unsigned long int index = 0;

	if (!ht)
		return (NULL);
	if (!key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[index])
		return (NULL);

	value = ht->array[index]->value;
	return (value);
}

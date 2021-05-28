#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key: is the key in the hash table
 * @size: is the size of the array of the hash table
 * Return:  the index at which the key/value pair should
 * be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0, h_index = 0;

	index = hash_djb2(key);
	h_index = index % size;
	return (h_index);
}

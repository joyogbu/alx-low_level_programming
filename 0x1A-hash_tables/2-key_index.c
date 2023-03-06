#include "hash_tables.h"
#include <string.h>

/**
 * key_index - get the index of a key
 * @key: a given key
 * @size: size of the hash table
 * Return: index of the key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2((unsigned char *)key);
	return (index % size);
}

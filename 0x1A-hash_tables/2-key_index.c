#include "hash_tables.h"

/**
 * key_index - return index for the key/value pair
 * @key: the key passed by user
 * @size: size of array
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}

#include "hash_tables.h"

/**
 * key_index - evaluate number of index.
 * @size: The size of the array.
 * @key: the key.
 * Return: hash.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int num;

	num = hash_djb2((unsigned char *)key);

		return (num % size);
}

#include "hash_tables.h"

/**
 * hash_table_create - create a hash table.
 * @size: size of the array.
 * Return: new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	new->size = size;
	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	return (new);

}
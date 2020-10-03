#include "hash_tables.h"

/**
 * hash_table_get - get key value.
 * @ht: struct.
 * @key: key.
 * Return: key or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int i = 0;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				if (strcmp(key, tmp->key) == 0)
					return (tmp->value);
				tmp = tmp->next;
			}
		}
		i++;
	}
	return (NULL);
}

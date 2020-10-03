#include "hash_tables.h"

/**
 * hash_table_print - Print in a dictionary.
 * @ht: struct.
 * Return: None.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	char dict[1024] = "";
	int c = 0;
	hash_node_t *tmp;

	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				if (c != 0)
					strcat(dict, ", ");
				strcat(dict, "'");
				strcat(dict, tmp->key);
				strcat(dict, "': '");
				strcat(dict, tmp->value);
				strcat(dict, "'");
				tmp = tmp->next;
				c++;
			}
		}
		i++;
	}
	printf("{%s}\n", dict);
}

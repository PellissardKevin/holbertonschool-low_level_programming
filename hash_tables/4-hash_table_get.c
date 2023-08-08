#include "hash_tables.h"
/**
 * hash_table_get - Retrieves value with key
 *
 * @ht: hash table
 * @key: key to find
 * Return: The Value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	int index;

	if (!ht)
		return (0);
		
	index = key_index((unsigned char *)key, ht->size);

	if (!ht->array[index])
		return (0);

	temp = ht->array[index];

	while (temp)
	{
		if (!strcmp(temp->key, key))
			return (temp->value);

		temp = temp->next;
	}

	return (0);

}

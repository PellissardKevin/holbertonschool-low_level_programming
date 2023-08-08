#include "hash_tables.h"
/**
 * hash_table_set - add to the hash table
 *
 * @ht: hash table to add
 * @key: is the key
 * @value: is the value of key
 * Return: 1 if success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;

	if (ht == NULL)
		return (0);

	if (key == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	
	if (value == NULL)
		value = " ";

	ht->array[index] = malloc(sizeof(hash_node_t));
	if (!ht->array[index])
		return (0);

	ht->array[index]->key = (char *)key;
	ht->array[index]->value = strdup((char *)value);
	if (!ht->array[index]->value)
	{
		free(ht->array[index]);
		free(ht);
		return (0);
	}
	ht->array[index]->next = NULL;

	return (1);
}

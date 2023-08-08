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
	hash_node_t *temp = NULL;
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (ht == NULL || key == NULL || new_node == NULL)
		return (0);

	if (value == NULL)
		value = "";

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp)
	{
		if (!strcmp(temp->key, key))
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	new_node->key = strdup((char *)key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup((char *)value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];

	ht->array[index] = new_node;

	return (1);
}

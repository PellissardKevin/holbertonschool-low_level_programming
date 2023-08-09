#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 *
 * @ht: Hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *newnode = NULL;
	unsigned long int i = 0;

	if (!ht)
		return;

	while (i < ht->size)
	{
		if (ht->array[i])
		{
			newnode = ht->array[i];
			break;
		}
		i++;
	}

	printf("{");
	if (newnode)
	{
		printf("'%s': '%s'", newnode->key, newnode->value);
		newnode = newnode->next;
		while (newnode)
		{
			printf(", '%s': '%s'", newnode->key, newnode->value);
			newnode = newnode->next;
		}
		i++;
		while (i < ht->size)
		{
			newnode = ht->array[i];
			while (newnode)
			{
				printf(", '%s': '%s'", newnode->key, newnode->value);
				newnode = newnode->next;
			}
			i++;
		}
	}
	printf("}\n");
}

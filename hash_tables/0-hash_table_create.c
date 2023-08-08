#include "hash_tables.h"
/**
 * hash_table_create - create an hash table
 *
 * @size: size of array
 * Return: hash_table_t*
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr = (struct hash_table_s *)malloc(sizeof(struct hash_table_s));

	if (ptr == NULL)
		return (0);

	ptr->size = size;
	ptr->array = malloc(size * sizeof(struct hash_node_s));

	if (ptr->array == NULL)
		return (0);
	
	return (ptr);
}

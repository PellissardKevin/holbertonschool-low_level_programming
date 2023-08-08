#include "hash_tables.h"
/**
 * hash_table_create - create an hash table
 *
 * @size: size of array
 * Return: hash_table_t*
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr = malloc(sizeof(hash_table_t));

	if (ptr == NULL)
		return (0);

	ptr->size = size;
	ptr->array = malloc(size * sizeof(hash_node_t));

	if (ptr->array == NULL)
		{
			free(ptr->array);
			free(ptr);
			return (0);
		}

	return (ptr);
}

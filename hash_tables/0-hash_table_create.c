#include "hash_tables.h"
/**
 * hash_table_create - create an hash table
 *
 * @size: size of array
 * Return: hash_table_t*
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr = (struct hash_table_s *)malloc(sizeof(hash_table_t));

	ptr->size = size;

	return (ptr);
}

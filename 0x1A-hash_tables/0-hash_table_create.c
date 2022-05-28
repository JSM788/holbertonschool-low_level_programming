#include "hash_tables.h"

/**
 * *hash_table_create - check the function
 * @size: unsigned long int
 * Return: table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size); /*=3071*/
	if (table->array == NULL)
		return (NULL);
	return (table);
}

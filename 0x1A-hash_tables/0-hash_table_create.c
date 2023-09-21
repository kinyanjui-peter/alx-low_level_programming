#include "hash_tables.h"

/**
 * hash_table_t *hash_table_create - function name
 * @size: - size of the hash table
 * Return: - pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int  counter = 0;

	if (size == 0)
	{
		return (NULL);
	}
	/* allocate space for the hash table*/
	table = (hash_table_t *)malloc(sizeof(hash_table_t));
		if (table == NULL)
		{
			return (NULL);
		}/*memory allocation failed*/

	/*allocate space for the hash nodes*/
	table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	/*initialize size and pointers*/
	table->size = size;
	for (counter = 0; counter <= size; counter++)
	{
		table->array[counter] = NULL;
	}
	return (table);
}

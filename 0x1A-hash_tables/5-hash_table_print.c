#include "hash_tables.h"
/**
 * hash_table_print - function name that prints a hash table
 * @ht: is the hash table
 * Return - key/value or NULL
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	char *c_flag = "";
	unsigned long int counter = 0;
	
	if (ht)
	{
		printf("{");
		while (counter < ht->size)
		{
			tmp = ht->array[counter];
			while (tmp)
			{
				printf("%s", c_flag);
				c_flag = ", ";
				if (tmp->key)
					printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
			}
			counter++;
		}
		printf("}\n");
	}
}

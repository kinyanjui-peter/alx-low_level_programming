#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table
 * Return - ht
 *
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *temp, *del_node;
    hash_table_t *first = ht;
    unsigned long int counter;

    for (counter = 0; counter < ht->size; counter++)
    {
        if (ht->array[counter] != NULL)
        {
            del_node = ht->array[counter];
            while (del_node != NULL)
            {
                temp = del_node->next;
                free(del_node->key);
                free(del_node->value);
                free(del_node);
                del_node = temp;
            }
        }
    }
    free(first->array);
    free(first);
}

#include "hash_tables.h"
/**
 *key_index - function name that gives you the index of a key.
 *@key: is the key
 *@size: hash table size
 *Return -  index at which the key/value pair should be stored in the array of the hash table
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node;
    unsigned long int counter;
    char *new_val;
    unsigned long int index;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    new_val = strdup(value);
    if (new_val == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);

    for (counter = index; ht->array[counter]; counter++)
    {
        if (strcmp(ht->array[counter]->key, key) == 0)
        {
            free(ht->array[counter]->value);
            ht->array[counter]->value = new_val;
            return (1);
        }
    }

    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
    {
        free(new_val);
        return (0);
    }

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }

    new_node->value = new_val;
    new_node->next = ht->array[index];
    ht->array[index] = new_node;
    return (1);
}

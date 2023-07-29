#include "main.h"

/**
 * _memset_custom - fills memory with a constant byte
 *
 * @memory: input pointer that represents memory
 *          block to fill
 * @value: character to fill the memory with
 * @bytes: number of bytes to be filled
 *
 `* Return: A pointer to the filled memory area
 */

char *_memset_custom(char *memory, char value, unsigned int bytes)
{
unsigned int i;

for (i = 0; i < bytes; i++)
	memory[i] = value;

return (memory);
}

/**
 * _calloc_custom - a function that allocates
 *                 memory for an array using malloc
 *
 *                 It is basically the equivalent to
 *                 malloc followed by memset_custom
 *
 * @num_elements: number of elements in the array
 * @element_size: size of each element
 *
 * Return: pointer with newly allocated memory
 *         or NULL if it fails
 */

void *_calloc_custom(unsigned int num_elements, unsigned int element_size)
{
char *ptr;

if (num_elements == 0 || element_size == 0)
return (NULL);

ptr = malloc(num_elements * element_size);
if (ptr == NULL)
	return (NULL);

_memset_custom(ptr, 0, num_elements * element_size);

return (ptr);
}

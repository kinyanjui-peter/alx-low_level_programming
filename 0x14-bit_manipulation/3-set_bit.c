#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @index: The index (starting from 0) of the bit you want to set.
 * @num_ptr: Pointer to the number whose bit will be set.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *num_ptr, unsigned int index)
{
unsigned long int mask;

/* Check if the index is within the valid range of the number's bits.*/
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);

/* Create a bitmask with only the bit at the given index set to 1.*/
mask = 1UL << index;

/* Set the bit at the given index to 1 by using bitwise OR.*/
*num_ptr = *num_ptr | mask;

return (1);
}

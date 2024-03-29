#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number whose bit will be cleared.
 * @index: The index (starting from 0) of the bit you want to set.
 * This function clears the bit at the specified index in the given number.
 * Return: 1 if it worked (bit cleared successfully),
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;
/* Check if the index is valid*/
if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);
/*Create a bitmask with 0 at the specified index and 1s elsewhere*/
bitmask = ~(1UL << index);

/* Apply the bitmask to the number to clear the bit at the given index*/
*n = *n & bitmask;

return (1); /* Bit cleared successfully*/
}


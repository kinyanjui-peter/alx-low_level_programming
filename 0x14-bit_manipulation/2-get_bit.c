#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @num: the number whose bits we are checking
 * @bit_index: the index of the bit to check (0-based)
 *
 * Return: the value of the bit at the specified index (0 or 1),
 *         or -1 if the index is out of range.
 */
int get_bit(unsigned long int num, unsigned int bit_index)
{
    unsigned long int bitmask, bit_value;

    // Check if the bit_index is within the valid range for the number
    if (bit_index > (sizeof(unsigned long int) * 8 - 1))
        return (-1);

    // Create a bitmask with only the bit at bit_index set to 1
    bitmask = 1 << bit_index;

    // Use bitwise AND to check if the bit at bit_index is set to 1
    bit_value = num & bitmask;

    // If the bit is set, return 1; otherwise, return 0
    if (bit_value == bitmask)
        return (1);
    else
        return (0);
}


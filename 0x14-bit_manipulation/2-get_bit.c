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

	if (bit_index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);

	bitmask = 1 << bit_index;
	bit_value = num & bitmask;

	if (bit_value == bitmask)
	return (1);
	else
	return (0);
}


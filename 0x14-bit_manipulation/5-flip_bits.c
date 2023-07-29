#include "main.h"

/**
 * flip_bits - Calculates the number of bits needed to flip
 *	to get from one number to another.
 * @n: The first number
 * @m: The second number
 * Return: The number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int difference, mask;
unsigned int count, i;

count = 0;
mask = 1;
difference = n ^ m;

/* Count the number of set bits in the difference */
for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
{
if (mask == (difference & mask))
count++;
mask <<= 1;
}

return (count);
}


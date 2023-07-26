#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int counter;
	unsigned int x;

	x = 0;
	if (!b)
		return (0);
	for (counter = 0; b[counter] != '\0'; counter++)
	{
		if (b[counter] != '0' && b[counter] != '1')
			return (0);
	}
	for (counter = 0; b[counter] != '\0'; counter++)
	{
		x <<= 1;
		if (b[counter] == '1')
			x += 1;
	}
	return (x);
}

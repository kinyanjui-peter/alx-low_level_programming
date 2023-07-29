#include "main.h"

/**
 * _power - calculate the power of a number
 * @base: base of the exponent
 * @pow: power of the exponent
 * Return: value of base raised to the power of pow
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
unsigned long int result;
unsigned int i;

result = 1;
for (i = 1; i <= pow; i++)
	result *= base;
return (result);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int divisor, bit;

/* Set a flag to check if we have encountered a set bit */
char flag = 0;

/* Calculate the divisor using _power to find the MSB of the number */
divisor = _power(2, sizeof(unsigned long int) * 8 - 1);

while (divisor != 0)
{
/* Check if the current bit is set (1) or not (0) */
bit = n & divisor;

/* If the bit is set, set the flag and print '1' */
if (bit == divisor)
{
	flag = 1;
	_putchar('1');
}
/* If the bit is not set and the flag is set, print '0' */
else if (flag == 1 || divisor == 1)
{
	_putchar('0');
}

/* Move to the next bit */
divisor >>= 1;
}
}


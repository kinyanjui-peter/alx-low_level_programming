#include "main.h"
/**
 * print_sign - Prints signs for a number
 * Return: 1 or 0
 * @n: interger passed to the function
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}

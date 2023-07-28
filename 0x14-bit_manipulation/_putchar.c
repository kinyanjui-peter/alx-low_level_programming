#include "main.h"
/**
 * _putchar - read a character
 * @c: character input
 * Return: 0
 *
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

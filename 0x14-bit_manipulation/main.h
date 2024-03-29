#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


unsigned long int _power(unsigned int base, unsigned int pow);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
char *_memset_custom(char *memory, char value, unsigned int bytes);
void *_calloc_custom(unsigned int num_elements, unsigned int element_size);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
int _putchar(char c);

#endif /*MAIN_H*/

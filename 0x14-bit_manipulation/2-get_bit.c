#include "main.h"
#include <stdio.h>
/**
 * get_bit - Function that returns the value of a bit at a given index
 * @n: number to check
 * @index: index starting from 0, of the bit we want to get
 * Return: Value of bit at index, or -1 if error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int gum;

if (index > 64)
return (-1);

gum = n >> index;

return (gum & 1);
}

#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Function that return the number of bits you will flip bits
 * @n: first flip number
 * @m: second number
 * Return: number of bits that was flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int k;
int j;

k = n ^ m;
j = 0;

while (k > 0)
j += k & 1;
k >>= 1;

return (j);
}

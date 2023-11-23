#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint -function that converts a binary number to an unsigned int
 * @b: char string pointing 0 and 1 char
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
int d;
unsigned int convertedValue = 0;

if (b == NULL)
return (0);

for (d = 0; b[d]; d++)
{
if (b[d] != '0' && b[d] != '1')
return (0);
convertedValue = (convertedValue * 2) + (b[d] - '0');
}
return (convertedValue);
}

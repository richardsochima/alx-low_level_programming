#include "main.h"
#include <stdio.h>
/**
 * clear_bit - Function that set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x;
unsigned int gum;

if (index > 64)
return (-1);
gum = index;
for (x = 1; gum > 0; x *= 2, gum--)
;

if ((*n >> index) & 1)
*n -= x;
return (1);
}

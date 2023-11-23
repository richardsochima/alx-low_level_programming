#include "main.h"
#include <stdio.h>

/**
 * print_binary - Function that prints binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
unsigned long int t;
int s;

if (n == 0)
{
printf("0");
return;
}

for (t = n, s = 0; (t >>= 1) > 0; s++)
;

for (; s >= 0; s--)
{
if ((n >> s) & 1)
printf("1");
else
printf("0");
}
}

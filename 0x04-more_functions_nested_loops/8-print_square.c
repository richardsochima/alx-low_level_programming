#include "main.h"

/**
 * print_square - Printing squares
 * @size : The number of square/number of times
 * Return: Empty
*/
void print_square(int size)

{
int e, f;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (e = 0; e < size; e++)
{
for (f = 0; f < size; f++)
{
_putchar(35);
}
_putchar('\n');
}
}
}

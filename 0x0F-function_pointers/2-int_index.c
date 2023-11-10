#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for integer
 * @array: the searched array
 * @size: size of array
 * @cmp: function pointer
 * Return: -1 or index of the searched integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int p;
if (array == NULL || cmp == NULL)
return (-1);
if (size <= 0)
return (-1);
for (p = 0; p < size; p++)
if (cmp(array[p]) == 1)
{
return (p);
}

return (-1);
}

#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that execute each element of array
 * @array: the array
 * @size: size of the array
 * @action: function that performs
 * Return: Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int p;
if (array == NULL || action == NULL)
return;

for (p = 0; p < size; p++)
action(array[p]);
}

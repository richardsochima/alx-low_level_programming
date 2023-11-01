#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - fuction that create array of char
 * @size: size of array
 * @c: character to be stored in the array
 * Return: pointer to the array or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *b;
if (size == 0)
{
return (NULL);
}
b = malloc(sizeof(char) * size);
if (b == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
b[i] = c;
return (b);
}

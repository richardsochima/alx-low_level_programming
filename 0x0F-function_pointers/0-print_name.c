#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - fuction that print name
 * @name: name to be printed
 * @f: function printer
 * Return: printed name
*/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}

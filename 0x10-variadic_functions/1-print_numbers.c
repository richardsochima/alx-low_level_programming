#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int p;
va_list sepa;

va_start(sepa, n);
for (p = 0; p < n; p++)
{
printf("%d", va_arg(sepa, unsigned int));
if (p != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(sepa);
}

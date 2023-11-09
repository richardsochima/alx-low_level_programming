#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints a string
 * @n: string to be printed
 * @separator: string to be printed between the strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int p;
va_list sepa;
char *b;

va_start(sepa, n);
for (p = 0; p < n; p++)
{
b = va_arg(sepa, char *);
if (b == NULL)
{
printf("(nil)");
}
else
{
printf("%s", b);
}
if (p != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(sepa);
}


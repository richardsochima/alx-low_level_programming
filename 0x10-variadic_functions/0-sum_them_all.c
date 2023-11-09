#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - funtion that returns sum of all parameter
 * @n: number of arguments
 * Return: sum of parameters
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int p;
int sum = 0;
va_list arg;

if (n == 0)
return (0);
va_start(arg, n);
for (p = 0; p < n; p++)

sum = sum + va_arg(arg, unsigned int);

va_end(arg);
return (sum);
}

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
va_list sepa;
char *str;
int i = 0;
char format_char;

va_start(sepa, format);

while (format && format[i])
{
format_char = format[i];
if (format[i + 1] == '\0')
break;

if (format_char == 'c')
printf("%c, ", va_arg(sepa, int));
else if (format_char == 'i')
printf("%d, ", va_arg(sepa, int));
else if (format_char == 'f')
printf("%f, ", va_arg(sepa, double));
else if (format_char == 's')
{
str = va_arg(sepa, char *);
if (str == NULL)
str = "(nil)";
printf("%s, ", str);
}
i++;
}

format_char = format[i];
if (format_char == 'c')
printf("%c", va_arg(sepa, int));
else if (format_char == 'i')
printf("%d", va_arg(sepa, int));
else if (format_char == 'f')
printf("%f", va_arg(sepa, double));
else if (format_char == 's')
{
str = va_arg(sepa, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
}

printf("\n");
va_end(sepa);
}

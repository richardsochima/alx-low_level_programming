#include "variadic_functions.h"
/**
* print_char - Prints a char.
* @arg: A list of arguments pointing to
* the character to be printed.
*/
void print_char(va_list arg)
{
char letter;

letter = va_arg(arg, int);

printf("%c", letter);
}

/**
* print_int - Prints an int.
* @arg: A list of arguments pointing to
* the integer to be printed.
*/
void print_int(va_list arg)
{
int num;

num = va_arg(arg, int);

printf("%d", num);
}

/**
* print_float - Prints a float.
* @arg: A list of arguments pointing to
* the float to be printed.
*/
void print_float(va_list arg)
{
float num;

num = va_arg(arg, double);

printf("%f", num);
}

/**
* print_string - Prints a string.
* @arg: A list of arguments pointing to
* the string to be printed.
*/
void print_string(va_list arg)
{
char *str;

str = va_arg(arg, char *);

if (str == NULL)
{
printf("(nil)");
return;
}

printf("%s", str);
}

/**

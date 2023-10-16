#include "main.h"
int _putchar(char c);

/**
 * _puts - function that prints a string
 * @str: String to be printed
 * Return: void
*/
void _puts(char *str)
{
int a;
for (a = 0; str[a] != '\0'; a++)
_putchar(str[a]);
_putchar ('\n');
}

#include "main.h"

/**
 * puts2 - prints every other character of a string
 * Starting with the first character
 * @str: string to be printed
 * Return: void
 */

void puts2(char *str)
{

int longi = 0;
int f = 0;
char *g = str;
int o;

while (*g != '\0')
{
g++;
longi++;
}
f = longi - 1;
for (o = 0 ; o <= f ; o++)
{
if (o % 2 == 0)
{
_putchar(str[o]);
}
}
_putchar('\n');
}

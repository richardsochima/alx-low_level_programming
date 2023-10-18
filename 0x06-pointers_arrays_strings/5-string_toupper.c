#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
int e;

e = 0;
while (n[e] != '\0')
{
if (n[e] >= 'a' && n[e] <= 'z')
n[e] = n[e] - 32;
e++;
}
return (n);
}

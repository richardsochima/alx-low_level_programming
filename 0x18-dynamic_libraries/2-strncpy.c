#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int f;

f = 0;
while (f < n && src[f] != '\0')
{
dest[f] = src[f];
f++;
}
while (f < n)
{
dest[f] = '\0';
f++;
}

return (dest);
}

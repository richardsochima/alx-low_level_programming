#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int k = 0;
int l = n;

for (; k < l; k++)
{
dest[k] = src[k];
n--;
}
return (dest);
}

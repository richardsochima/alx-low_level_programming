#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to newly allocated space
 * @str: string to point to
 * Return: pointer to duplicated string.
*/

char *_strdup(char *str)
{
char *b;
int a;
int x = 0;

if (str == NULL)
return (NULL);
for (a = 0; str[a] != '\0'; a++)
x++;
b = malloc(sizeof(char) * x + 1);
if (b == NULL)
return (NULL);
for (a = 0; str[a] != '\0'; a++)
b[a] = str[a];
return (b);
}

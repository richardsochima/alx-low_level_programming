#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: first string to concatenates
 * @s2: second sting to concatenates
 * Return: pointer to newly allocated space
*/

char *str_concat(char *s1, char *s2)
{
char *a;
int x = 0;
int y = 0;
int c, d;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (x = 0; s1[x] != '\0'; x++)
;
for (y = 0; s2[y] != '\0'; y++)
;
a = malloc((x * sizeof(*s1)) + (y * sizeof(*s2)) + 1);
if (a == NULL)
return (NULL);

for (c = 0, d = 0; c < (x + y + 1); c++)
{
if (c < x)
a[c] = s1[c];
else
a[c] = s2[d++];
}
a[c] = '\0';
return (a);
}

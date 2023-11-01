#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
*/

char *argstostr(int ac, char **av)
{
int f, k, r = 0, l = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (f = 0; f < ac; f++)
{
for (k = 0; av[f][k]; k++)
l++;
}
l += ac;

str = malloc(sizeof(char) * l + 1);
if (str == NULL)
return (NULL);
for (f = 0; f < ac; f++)
{
for (k = 0; av[f][k]; k++)
{
str[r] = av[f][k];
r++;
}
if (str[r] == '\0')
{
str[r++] = '\n';
}
}
return (str);
}

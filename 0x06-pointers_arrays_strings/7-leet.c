#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
int e, f;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (e = 0; n[e] != '\0'; e++)
{
for (f = 0; f < 10; f++)
{
if (n[e] == s1[f])
{
n[e] = s2[f];
}
}
}
return (n);
}

#include "main.h"

/**
 * _strlen - find the lenght of the string
 * @s: strings to be counted
 * Return: Lenght of the string
*/

int _strlen(char *s)
{
int a;
int count = 0;
for (a = 0; s[a] != '\0' ; a++)
count++;
return (count);
}

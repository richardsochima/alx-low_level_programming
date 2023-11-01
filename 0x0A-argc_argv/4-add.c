#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Adds positive numbers
 * @argc: arguments count
 * @argv: argument vector
 * Return: 0 for success otherwise 1 for error
*/

int main(int argc, char *argv[])
{
int x;
int num;
int sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (x = 1; x < argc; x++)
{
num = atoi(argv[x]);
if (num == 0 && argv[x][0] != '0')
{
printf("Error\n");
return (1);
}
if (num > 0)
{
sum += num;
}
}
printf("%d\n", sum);
return (0);
}

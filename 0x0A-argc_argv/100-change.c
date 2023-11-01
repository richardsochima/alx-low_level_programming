#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Programs that prints the minimum number of coins
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
int cents;
int coins = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
while (cents > 0)
{
if (cents >= 25)
{
cents -= 25;
}
else if (cents >= 10)
{
cents -= 10;
}
else if (cents >= 5)
{
cents -= 5;
}
else if (cents >= 2)
cents -= 2;
else
{
cents -= 1;
}
coins++;
}
printf("%d\n", coins);
return (0);
}

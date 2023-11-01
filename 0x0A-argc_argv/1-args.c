#include <stdio.h>

/**
 * main - print the number of arguements passed into it
 * @argc: arguement count
 * @argv: arguement vector
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}

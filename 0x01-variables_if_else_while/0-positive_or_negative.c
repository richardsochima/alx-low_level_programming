#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - print a message to stderr
 * Return: 0
 */
int main(void)
{
	char *error = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, error, 59);
	return (1);
}

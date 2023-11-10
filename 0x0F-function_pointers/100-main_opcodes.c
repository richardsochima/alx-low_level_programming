#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *print_opcodes - this function prints the opcodes of it’s main function
 *@num_bytes: this is the number of bytes
 *Return: void
 */

void print_opcodes(int num_bytes)
{
	int i = 0;
	unsigned char *func_ptr = (unsigned char *)print_opcodes;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", func_ptr[i]);
		if (i < num_bytes - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 *main - calls opcodes and get argv from the command line
 *@argc: argument count
 *@argv: array of argument
 *Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int num_bytes = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(num_bytes);

	return (0);
}

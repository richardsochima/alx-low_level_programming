#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - Reads and prints a text file to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters that should read and printed.
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_descpt;
ssize_t r, w;
char *buf;

if (filename == NULL)
return (0);
file_descpt = open(filename, O_RDONLY);
if (file_descpt == -1)
return (0);
buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
close(file_descpt);
return (0);
}
r = read(file_descpt, buf, letters);
if (r == -1)
{
free(buf);
close(file_descpt);
return (0);
}

w = write(STDOUT_FILENO, buf, r);
if (w == -1 || w != r)
{
free(buf);
close(file_descpt);
return (0);
}
free(buf);
close(file_descpt);
return (w);
}

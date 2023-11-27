#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: name of file to be created
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int file_desp, s, w;
if (filename == NULL)
return (-1);
file_desp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (file_desp == -1)
return (-1);

if (text_content)
{
for (w = 0; text_content[w] != '\0'; w++)
;
s = write(file_desp, text_content, w);
if (s == -1)
return (-1);
}
close(file_desp);
return (1);
}

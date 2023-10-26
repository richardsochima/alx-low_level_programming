#include "main.h"

/**
 * is_palindrome_recursive - Helper function to check if
 * a string is a palindrome recursively.
 * @str: The string to be checked
 * @start: Starting index of the string
 * @end: Ending index of the string
 *
 * Return: 1 if the string is a palindrome, otherwise 0
 */
int is_palindrome_recursive(char *str, int start, int end)
{
if (start >= end)
{
return (1);
}

if (str[start] != str[end])
{
return (0);
}

return (is_palindrome_recursive(str, start + 1, end - 1));
}

/**
 * get_string_length_recursive - Returns the length of a string recursively.
 * @str: The string to calculate the length of
 *
 * Return: The length of the string
 */
int get_string_length_recursive(char *str)
{
if (*str == '\0')
{
return (0);
}

return (1 + get_string_length_recursive(str + 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @str: The string to be checked
 *
 * Return: 1 if it is a palindrome, 0 otherwise
 */
int is_palindrome(char *str)
{
int length;
if (*str == '\0')
{
return (1);
}

length = get_string_length_recursive(str);
return (is_palindrome_recursive(str, 0, length - 1));
}

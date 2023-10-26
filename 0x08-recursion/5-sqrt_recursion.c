#include "main.h"
#include <stdio.h>
int _sqrt_recursion(int n);
int _sqrt_recursion_helper(int n, int guess);
/**
 * _sqrt_recursion - Calculate the natural square root of a number.
 * @n: The number for which to find the square root.
 * Return: The natural square root of 'n' if it exists, or -1 if not.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursion_helper(n, 1));
}
/**
 * _sqrt_recursion_helper - Helper function to recursively
 *find the square root.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of 'n' if it exists, or -1 if not.
 */
int _sqrt_recursion_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (_sqrt_recursion_helper(n, guess + 1));
}

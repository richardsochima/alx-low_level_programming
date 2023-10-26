#include "main.h"

/**
 * _sqrt_recursion - Functions that returns the natural square root of a number
 * sqrt_recursive - Helper function to find the square root recursively.
 * @n: number to calculate the square root
 * @t: The current guess for the square root.
 * Return: -1 if n does not have a natural square root
*/

int sqrt_recursive(int n, int t)
{
int square = t * t;
if (square == n)
return (t);

else if (square > n)
return (-1);
return (sqrt_recursive(n, t + 1));
}

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (sqrt_recursive(n, 2));
}
}

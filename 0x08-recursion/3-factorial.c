#include "main.h"

/**
 * factorial- Function that returns the factorial of a given number.
 * @n: The number for which to calculate the factorial
 * Return: -1 to indicate an error otherwise factorial on n
*/

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
return (1);
return (n * factorial(n - 1));
}

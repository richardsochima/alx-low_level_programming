#include "main.h"

/**
 * _pow_recursion - Function that returns the value of x raised to power of y
 * @x: The value to be raised.
 * @y: The power raised.
 *
 * Return: -1 if y is lower than 0 otherwise return 0
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}

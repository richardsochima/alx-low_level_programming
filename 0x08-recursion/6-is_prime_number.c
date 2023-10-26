#include "main.h"

/**
 * check_primality - Checks if a number is prime recursively.
 * @num: The number to evaluate for primality.
 * @divisor: The current divisor being tested.
 *
 * Return: 1 if num is prime, 0 if not.
 */
int check_primality(int num, int divisor);

/**
 * is_prime_number - Determines if an integer is a prime number or not.
 * @n: The number to evaluate.
 *
 * Return: 1 if n is a prime number, 0 if not.
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}

return (check_primality(n, n - 1));
}

/**
 * check_primality - Checks if a number is prime recursively.
 * @num: The number to evaluate for primality.
 * @divisor: The current divisor being tested.
 *
 * Return: 1 if num is prime, 0 if not.
 */
int check_primality(int num, int divisor)
{
if (divisor == 1)
{
return (1);
}

if (num % divisor == 0 && divisor > 0)
{
return (0);
}

return (check_primality(num, divisor - 1));
}

#include "main.h"

/**
 * is_divisible - checks if a number is divisibel
 * @num: the number to be checked
 * @div: the divisor
 *
 * Return: 0 if number is divisible and -1 if not divisible
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to be checked
 *
 * Return: 0 if not prime and -1 if prime
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}

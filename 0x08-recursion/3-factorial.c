#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: the number to find the factorial
 *
 * Return: -1 if an error occurs and 0 if no error
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}

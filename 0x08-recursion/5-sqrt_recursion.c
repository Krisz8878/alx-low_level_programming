#include "main.h"

/**
 * find_sqrt - finds the natural root of a number
 * @num: the number to find it's sqr root
 * @root: the root to be tested
 *
 * Return: the square root
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root
 * @n: the number to return it's square root
 *
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}

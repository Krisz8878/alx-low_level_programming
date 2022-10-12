#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Adds two numbers.
 * @a: the first number.
 * @b: The second number.
 *
 * Return: the result of the addition.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts a number from another.
 * @a: the first number
 * @b: the second number
 *
 * Return: the difference between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers.
 * @a: the first number
 * @b: the second number
 *
 * Return: the result of the differences
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a number by another.
 * @a: the first number
 * @b: the second number
 *
 * Return: the result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the remainder from a division
 * of two numbers.
 * @a: the first number.
 * @b: the second number.
 *
 * Return: the result.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

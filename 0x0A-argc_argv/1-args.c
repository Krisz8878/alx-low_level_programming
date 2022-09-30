#include <stdio.h>

/**
 * main - prints the number of arguments passed to it.
 * @argc: the argument count.
 * @argv: an array of pointers to the argument.
 *
 * Return: always 0 for success.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

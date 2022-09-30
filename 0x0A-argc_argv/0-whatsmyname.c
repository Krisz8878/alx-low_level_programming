#include <stdio.h>

/**
 * main - prints the program name, followed by a new line.
 * @argc: the argument count.
 * @argv: the argument vector.
 *
 * Return: always 0 for success.
 */
int main(int_attribute_((_unused_)) argc, char *argv[])
{
	printf("%s\n", argv[]);

	return (0);
}

#include <stdio.h>

/**
 * main - prints all the arguments it receives.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: always 0 success.
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}

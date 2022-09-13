#include "main.c"
#include <unistd.h>

/**
 * main - the entry point
 * Description: prints _putchar
 * Return: Always 0 on success
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}

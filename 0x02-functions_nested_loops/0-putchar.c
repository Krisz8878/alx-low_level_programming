#include "main.h"
#include <unistd.h>

/**
 * main - the entry point
 * Description: prints _putchar
 * Return: Always 0 on success
 */
char _putchar(char c)
{
	return (write (1, &c, 1));
}

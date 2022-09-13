#include "main.h"

/**
 * main - entry point
 *print_alphabet - a function that prints the alphabets in lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)	/* prints thealphabets lowercase */
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

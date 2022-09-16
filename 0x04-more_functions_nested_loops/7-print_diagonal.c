#include "main.h"

/**
 * print_diagonal - draws a diagonal line using the \ character
 * @n: the number of \ characters to be printed
 */
void print_diagonal(int n)
{
	int len, space;

		for (space = 1; space <= n; space++)
		{
			for (len = 1; len < space; len++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	if (n < 1)	
	_putchar('\n');
}

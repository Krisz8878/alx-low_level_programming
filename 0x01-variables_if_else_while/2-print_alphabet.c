#include <stdio.h>
#include <unistd.h>
/**
 * main - the entry point
 * Description: prints the alphabets in lowercase\n
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
return (0);
}

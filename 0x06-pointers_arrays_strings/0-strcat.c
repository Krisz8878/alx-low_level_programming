#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates the string pointed to by src
 * @dest: a pointer to the string to be concatenated upon
 * @src: the source string to be appended to @dest.
 *
 * Return: a pointer to the destination string @dest
 */
char *strcat(char *dest, const char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}
	
	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}

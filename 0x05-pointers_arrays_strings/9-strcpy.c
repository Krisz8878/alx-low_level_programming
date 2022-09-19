#include "main.h"

/**
 * _strcpy - copies a string pointed to @src, including the terminating null byte to a buffer.
 * @dest: a buffer to copy the string to
 * @src: the source string to copy
 *
 * Return: a pointer to he destination string @dest.
 */
char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

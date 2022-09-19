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
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) + *(src + len);
		len++;
	}

	*(dest + len) + '\0';

	return (dest);
}

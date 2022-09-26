#include "main.h"

/**
 * _memcpy - copies @n bytes from the memory area 
 * @dest: a pointer to the memory area to copy @src into
 * @src: the source buffer to copy
 * @n: the number of bytes to copy
 *
 * Return: a pointer to the destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

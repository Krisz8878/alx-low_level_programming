#include "main.h"

/**
 * _strlen - returns the length of a string
 *@str: the string whose lenght is to be determine.
 *
 *Return: the length of @str
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}

#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: the size of the array to be initialize
 * @c: the specific char to initialize
 *
 * Return: 0 if size == 0 otherwise null
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}

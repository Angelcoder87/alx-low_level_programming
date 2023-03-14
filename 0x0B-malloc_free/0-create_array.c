#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char
 *
 * @size: the size of the array to be created
 * @c: the char to initialize the array with
 *
 * Return: a pointer to the array, or NULL if it fail
 *  if size = 0, returns NULL
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
	{
	return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
	return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
	arr[i] = c;
	}

	return (arr);
}


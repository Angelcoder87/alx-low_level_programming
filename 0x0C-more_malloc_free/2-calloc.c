#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of bytes
 *
 * Return: pointer to the allocate memory
 * if nmemb or size is 0, returns NULL
 * if malloc fails, returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
	return (NULL);
	}

	/* set the memory to zero */
	memset(ptr, 0, nmemb * size);

	return (ptr);
}


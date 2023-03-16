#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocates
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
	exit(98);
	}

	return (p);
}

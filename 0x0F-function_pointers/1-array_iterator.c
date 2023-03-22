#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - prints each array element on a new line
 * @array: array
 * @size: how many elements to print
 * @action: pointer to print in regular or hex
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}


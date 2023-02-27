#include "main.h"

/**
 * puts2char - prints one character out of 2
 * @str: input
 * Return: print
 */

void puts2char(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');

}


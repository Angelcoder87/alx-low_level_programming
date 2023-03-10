#include "main.h"
/**
  * _strncat - concatenates two strings.
  * @dest: copy to
  * @src: copy from
  * @n: number of char to be copied
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
	{
	i++;
	}

	while (src[j] != '\0' && j < n)
	{
	dest[i] = src[j];
	i++;
	j++;
	}

	dest[i] = '\0';

	return (dest);
}


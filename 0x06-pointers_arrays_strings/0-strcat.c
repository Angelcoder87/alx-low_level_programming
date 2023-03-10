#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: copy to.
 * @src: copy from
 * Return: pointer to dest
 */



char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
	{
	i++;
	}

	while (src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}

	dest[i] = '\0';

	return (dest);
}

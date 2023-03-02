
#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;
	char leet[10] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T', '?', '?'};

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; j < 10; j++)
	{
	if (str[i] == 'a' || str[i] == 'A')
	str[i] = leet[4];
	else if (str[i] == 'e' || str[i] == 'E')
	str[i] = leet[3];
	else if (str[i] == 'o' || str[i] == 'O')
	str[i] = leet[0];
	else if (str[i] == 't' || str[i] == 'T')
	str[i] = leet[7];
	else if (str[i] == 'l' || str[i] == 'L')
	str[i] = leet[1];
	}
	}

	return (str);
}


#include <stdio.h>
/**
 * main - print combination of single-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = i; j < 10; j++)
	{
	putchar(i + '0');
	putchar(j + '0');

	putchar((i < 9 || j < 9) ? ',' : '\n');

	}
	}

	return (0);
}


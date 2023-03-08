#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the square root of n, or -1 if n does not have natural square root
 */
int _sqrt_recursion(int n)
{
	/* Base case: n is 0 or 1 */
	if (n == 0 || n == 1)
	return (n);

	/* Recursive case: try values from 1 to n/2 */

	int i;

	for (i = 1; i <= n / 2 ; i++)

	{
	/* Check if i*i is equal to n */
	if (i * i == n)
	return (i);
	}

	/* If i*i is greater tahn, n does not have a natural square root */
	if (i * i > n)
	return (-1);


	/* If we have not found a square root yet, try the next integer */
	return (_sqrt_recursion(n - 1));
}


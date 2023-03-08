#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The number to find the natural square root.
 *
 * Return: The natural square root of @n, if it doesn't have a natural square
 * root, return -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);

	if (n == 0 || n == 1)
	return (n);

	return (sqrt_recursive(n, 1, n));
}

/**
 * sqrt_recursive - Recursive function that finds the natural square root
 * of a number.
 *
 * @n: The number to find the natural square root.
 * @i: The current divisor to check.
 * @j: The current candidate for the square root.
 *
 * Return: The natural square root of @n, if it doesn't have a natural square
 * root, return -1.
 */
int sqrt_recursive(int n, int i, int j)
{
	if (j == 0 || j == 1)
	return (j);

	if (j * j == n)
	return (j);

	if (j * j < n && (j + 1) * (j + 1) > n)
	return (-1);

	if (j * j > n)
	return (sqrt_recursive(n, i, j - 1));

	return (sqrt_recursive(n, j + 1, j + 1));
}


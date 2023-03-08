/**
 * is_prime_number - checks whether a number is prime
 * @n: the number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	/* Negative numbers, 0, and 1 are not prime */
	if (n <= 1)
	return (0);

	/* Check if n is divisible by any number from 2 to n/2 */
	int i;

	for (i = 2; i <= n / 2; i++)

	{
	if (n % i == 0)
	return (0); /* n is not prime */
	}

	/* n is prime if it is not divisible by any number from 2 to n/2 */
	return (1);
}


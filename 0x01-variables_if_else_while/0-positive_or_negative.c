#include <stdio.h>
/**
  * main- A program that tell whether number is positive or negative"
  * Return: 0 (Always)
  */

int main(void)
{
	    int n;

	printf("Enter an integer: ");
	scanf("%d", &n);

	if (n > 0)
	printf("%d is positive\n", n);
	else if (n < 0)
	printf("%d is negative\n",
	else
	printf("The number is zero\n");

	return (0);
}



#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
  * main- A program that tell whether number is positive or negative"
  * Return: 0 (Always)
  */
int main(void)
{
	    int n;

	srand(time(NULL));
	n = rand() % 201 - 100;

	printf("%d is ", n);
	if (n > 0)
	printf("positive\n");
	else if (n < 0)
	printf("negative\n");
	else
	printf("zero\n");

	return (0);
}


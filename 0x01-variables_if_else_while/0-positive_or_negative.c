#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main- A program that tell whether number is positive or negative"
  * Return: 0 (Always)
  */

int main(void)
{
srand(time(0));
int n = rand() % 201 - 100;
	printf("%d is ", n);
	if (n > 0)
	{
	printf("positive\n");
	}
	else if (n == 0)
	{
	printf("zero\n")
	}
	else
	{
	printf("negative\n");
	}

	return (0);
}




#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	/* Initialize the random number generator with the current time */
	srand(time(0));

	/* Generate a random number and assign it to the variable n */
	n = rand() - RAND_MAX / 2;

	/* Check if n is positive, negative, or zero and print the result */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("0 is zero\n");
	}

	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long n = 612852475143;
	long largest_prime = -1;
	long divisor = 2;

	while (n != 1)
	{
		if (n % divisor != 0)
		{
			divisor++;
		}
		else
		{
			largest_prime = divisor;
			n = n / divisor;
		}
	}

	printf("%ld\n", largest_prime);
	return (0);
}

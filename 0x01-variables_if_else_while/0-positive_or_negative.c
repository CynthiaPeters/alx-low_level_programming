#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This determines the positive, negative and zero numbers.
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is equal to zero\n", n);
	}
	else
	{
		printf("%d is Negative\n", n);
	}

	return (0);
}

#include <stdio.h>


/**
 * Prints Alphabets
 *
 * Return 0 (successful)
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i;

	for (i = 0; i <52; i++)
	{
		putchar(alp[i]);
	}

	putchar('\n');

	return (0);
}

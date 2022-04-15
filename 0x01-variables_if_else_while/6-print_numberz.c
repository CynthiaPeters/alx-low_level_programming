#include <stdio.h>

/**
 *main - Prints numbers 0 - 9
 *
 *Return: returns 0 (successful)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}

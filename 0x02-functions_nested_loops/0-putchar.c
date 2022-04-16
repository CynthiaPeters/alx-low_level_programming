#include "main.h"

/**
 * main - Prints Putchar as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {112, 117, 116, 067, 72, 97, 82};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}

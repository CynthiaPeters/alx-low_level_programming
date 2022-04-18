#include "main.h"

/**
 * main - Prints Putchar as entry block
 *
 * void - no arguments
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ermias[] = "_putchar";

	int count;

	
	for (count = 0; count < 8; count++)
	{
		_putchar(ermias[count]);
	}
	_putchar('\n');
	return (0);
}

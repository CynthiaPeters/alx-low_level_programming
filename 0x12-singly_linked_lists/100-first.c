#include <stdio.h>

/**
 * bmain - function executed before main
 * Return: no return.
 */

void __attribute__ ((constructor)) bmain()
{
	printf("Oh! going is tougher, but am not giving up on this school");
	printf(",\nIt's incredible what they say about me behind!\n");
}

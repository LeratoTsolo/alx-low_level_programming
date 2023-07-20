#include "main.h"
#include <stdio.h>
/**
*times_table - print 9x table
*Return: void
*/
void times_table(void)
{
	int c, r, a;

	for (c = 0; c < 10; c++)
	{
		for (r = 0; r < 10; r++)
		{
		a = c * c;
		printf("%d", a);
		printf(", ");
		}
		printf("\n");
	}
}	

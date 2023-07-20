#include "main.h"
#include <stdio.h>
/**
*print_to_98 - print natural numbers
*@n: parameter
*Return: void
*/
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
		printf("%2d, ", i);
}

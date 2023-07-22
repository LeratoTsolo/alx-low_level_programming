#include "main.h"
/**
*print_diagonal - print \ n times
*@n: parameter
*/
void print_diagonal(int n)
{
	int i = n;
	int s; 

	if (i <= 0)
	_putchar('\n');
	else
	{
	for (i = 1; i <= n; i++)
		{
		for (s = 1; s <= i; s++)
		_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		}
	}
}

#include "main.h"
/**
*print_diagonal - print \ n times
*@n: parameter
*/
void print_diagonal(int n)
{
	int i;
	int s;

	if (n <= 0)
	_putchar('\n');
	else
	{
	for (i = 0; i <= n; i++)
		{
		for (s = 0; s <= i; s++)
		_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		}
	}
}

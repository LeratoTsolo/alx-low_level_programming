#include "main.h"
/**
*print_line - print _ n times
*@n: parameter
*Return: void
*/
void print_line(int n)
{
	int i = n;
	
	if (i <= 0)
		_putchar('\n');
	else
	{
	for (i = 0; i <= n; i++)
		_putchar('_');
	_putchar('\n');
	}
}

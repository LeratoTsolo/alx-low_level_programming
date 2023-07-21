#include "main.h"
/**
*print_line - print _ n times
*@n: parameter
*Return: void
*/
void print_line(int n)
{
	int i = n;

	for (i = 0; i <= n; i++)
		_putchar("_");
	_putchar('\n');
}

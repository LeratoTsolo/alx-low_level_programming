#include "main.h"
/**
*swap_int - swaps values of 2 integers
*@a: first integer
*@b: 2nd integer
*Return: void
*/
void swap_int(int *a, int *b)
{
	int c;
	int d;

	d = *b;
	c = *a;
	*a = d;
	*b = c;
}

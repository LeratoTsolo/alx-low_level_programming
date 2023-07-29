#include "main.h"
/**
*reverse_array - print a string in reverse
*@a: input int
*@n: input int
*Return: void
*/
void reverse_array(int *a, int n)
{
	int c;
	int i;
	
	n = n -1;
	for (i = 0; i < n; i++)
	{
	c = a[i];
	a[i] = a[n];
	a[n] = c;
	n--;	
	}
} 

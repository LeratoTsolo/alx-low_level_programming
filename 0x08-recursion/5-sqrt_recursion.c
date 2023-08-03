#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
* _sqrt_recursion - return square root
* @n: input
* Return: root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return(actual_sqrt_recursion(n, 0));
}

/**
* actual_sqrt_recursion - find natural number
* @n:- input
* @i: input
* Return: root
*/
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	return (-1);
	if (i * i == 0)
	return (i);
	return (actual_sqrt_recursion( n, i + 1));
}


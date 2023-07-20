#include "main.h"
/**
*print_last_digit - prints last digit of a number
*@i: parameter
*Return: i
*/
int print_last_digit(int i)
{
	if (i < 0)
	i = i * -1;
	i = i % 10;
	_putchar(i + '0');
	return (i);
}

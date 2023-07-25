#include "main.h"
/**
*puts_half - prints string
*@str: input string
*Return: void
*/
void puts_half(char *str)
{
	int i;
	int c;
	
	for (i = 0; str[i] != '\0'; i++)
	c++;
/*	if (c % 2 == 0)
	i = c / 2;
	else
*/	i = (c - 1) / 2;
	for (c = i + 1; str[c] != '\0'; c++)
	_putchar(str[c]);
	_putchar('\n');
}

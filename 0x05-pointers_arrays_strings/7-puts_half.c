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
	int s = 0;
		
	for (i = 0; str[i] != '\0'; i++)
	c++;
/*	if (c % 2 == 0)
	i = c / 2;
	else
*/	s = (c - 1) / 2;
	for (i = s + 1; str[i] != '\0'; i++)
	_putchar(str[i]);
	_putchar('\n');
}

#include "main.h"
/**
*print_rev - print a string in reverse
*@s: input string
*Return: void
*/
void print_rev(char *s)
{
	int c;
	int i;

	c = 0;
	for (i = 0; s[i] != '\0'; i++)
	c++;
	for (c = c - 1; c >= 0; c--)
	_putchar(s[c]);
	_putchar('\n');
}

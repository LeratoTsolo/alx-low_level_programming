#include "main.h"
/**
*_puts - prints string
*@str: input string
*Return: void
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	_putchar(str[i]);
}

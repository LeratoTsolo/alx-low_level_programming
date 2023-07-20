#include "main.h"
/**
*jack_bauer - print every minute
*Return: void
*/
void jack_bauer(void)
{
	int h, s;

	for (h = 0; h < 24; h++)
	{
		for (s = 0; s < 60; s++)
		{
		_putchar(h / 10 +'0');
		_putchar(h % 10 + '0');
		_putchar(':');
		_putchar(s / 10 +'0');
		_putchar(s % 10 + '0');
		}
		
	}
}

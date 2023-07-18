#include "main.h"
/**
*main - prints _putchar followed by new line.
*Return: (0) success
*/
int main(void)
{
	char c[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
	_putchar(c[i]);
	}
	return (0);
}

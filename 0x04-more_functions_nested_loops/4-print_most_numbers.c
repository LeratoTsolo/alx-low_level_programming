#include "main.h"
/**
* print_most_numbers - print alphabets in lowecase.
* Return: (0) success
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
		_putchar(i + '0');
		_putchar('\n');
		}
	}
}

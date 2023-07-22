#include "main.h"
/**
*more_numbers - print alphabets in lowecase.
*/
void more_numbers(void)
{
	int i;
	int a;

	for (a = 0; a <= 10; a++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
        }
	_putchar('\n');
}

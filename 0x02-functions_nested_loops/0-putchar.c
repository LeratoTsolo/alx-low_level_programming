#include "_putchar.c"
#include <stdio.h>
/**
*main - prints _putchar followed by new line.
*Return: (0) success
*/
int main(void)
{
	char c[9] = "_putchar";
	int i =1;
	for(i = 1; i < 9; i++)
	{
		putchar(c[i]);
	}
	return (0);
}

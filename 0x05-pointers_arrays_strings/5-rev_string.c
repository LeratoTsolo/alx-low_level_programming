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
	char st;

        c = 0;
        for (i = 0; s[i] != '\0'; i++)
        c++;
        for (c = c - 1; c >= 0; c--)
	{
	st = s[i];
 	s[i] = s[c];
	s[c] = st;
	}	
		/*_putcha(s[c]);
        _putchar('\n'); */
}

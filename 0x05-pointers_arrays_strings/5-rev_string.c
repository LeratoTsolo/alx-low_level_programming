#include "main.h"
/**
*rev_string - print a string in reverse
*@s: input string
*Return: void
*/
void rev_string(char *s)
{
        int c;
        int i;
	char st;

        c = 0;
        for (i = 0; s[i] != '\0'; i++)
        c++;
        for (i = 0 ; i < c / 2; i++)
	{
	st = s[i];
 	s[i] = s[c - 1 - i];
	s[c - 1 - i] = st;
	}	
		/*_putcha(s[c]);
        _putchar('\n'); */
}

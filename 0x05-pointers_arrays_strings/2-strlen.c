#include "main.h"
#include <stdio.h>
/**
*_strlen - returns length of a string
*@s: string input
*Return: number of characters
*/
int _strlen(char *s)
{
	int c;
	int i;

	c = 0;
	for (i = 0; s[i] != '\0'; i++)
		c++;
	return (c);
}

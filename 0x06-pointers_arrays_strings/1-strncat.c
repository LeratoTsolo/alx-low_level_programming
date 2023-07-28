#include "main.h"
#include <string.h>
/**
*_strncat - concatinate two strings
*@dest: destination string
*@src: source string
*@n: inptu integer
*Return: character
*/
char *_strncat(char *dest, char *src, int n)
{
	int l;
	int i;

	l = strlen(dest);
	for (i = 0; i < n && *src != '\0'; i++)
	{
	dest[l + i] = *src;
	src++;
	}
	dest[l + i] = '\0';
	return (dest);
}

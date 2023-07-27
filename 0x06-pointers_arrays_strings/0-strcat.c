#include "main.h"
/**
*_strcat - concatinates two strings.
*@dest: destination string
*@src: source string
*return: destination string
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int s;
	int d;

	for (i = 0; dest[i] != '\0'; i++)
	d++;
	for (i = 0; src[i] != '\0'; i++)
	s++;
	for (i = 0; i <= s; i++)
	dest[d + 1] = src[i];
	return (dest);
}

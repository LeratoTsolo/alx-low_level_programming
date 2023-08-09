#include "main.h"
/**
*_memcpy - copy memory area
*@dest: destination
*@src: source
*n: bytes
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
	dest[a] = src[a];
	n--;
	}
	return (dest);
}

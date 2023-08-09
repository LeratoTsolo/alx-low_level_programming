#include "main.h"
/**
*_memset - fill memory with specifc value.
*@s: address
*@b: value
*@n: bytes to change
*Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}

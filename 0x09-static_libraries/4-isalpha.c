#include "main.h"
#include <ctype.h>
/**
*_isalpha - checks if character is an alphabet.
*@c: paramater
*Return: (1) or (0)
*/
int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
	return (0);
	}
	else
	return (1);
}

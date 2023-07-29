#include "main.h"
/**
*cap_string - capitalize string
*@str: input string
*Return: character
*/
char *cap_string(char *str)
{
	int i;
	int a[] = {44, 59, 56, '!', '?', '"', '(', ')', ' ', '\t', '\n'};
	int l;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (i ==0 && str[i] >= 'a' && str[i] <= 'z')
	str[i] = str[i] - 32;
	for (l = 0; a[l] != '\0'; l++)
		{
		if (a[l] == str[i] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		str[i + 1] = str[i + 1] - 32;
		}
	}
	return (str);
}


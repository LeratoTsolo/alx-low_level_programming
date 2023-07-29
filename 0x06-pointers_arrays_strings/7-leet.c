#include "main.h"
/**
*leet - encoding string
*@str: input string
*Return: char
*/
char *leet(char *str)
{
	int i;
	int j;
	char c[] = "aAeEoOtTlL";
	char d[] = "4455007711";

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; c[j] != '\0'; j++)
		{
		if (str[i] == c[j])
		str[i] = d[j];
		}
	}
	return (str);
}

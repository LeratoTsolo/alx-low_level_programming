#include "main.h"
/**
*_strstr - locate a substring
*@haystack: input
*@needle: input
*Return: char
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *i = haystack;
	char *a = needle;

	while (*i == *a && *a != '\0')
	{
	i++;
	a++;
	}
	if (*a == '\0')
	return (haystack);
	}
	return (0);
}

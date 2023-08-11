#include <stdlib.h>
#include "main.h"
/**
*_strdup - allocate memory and return pointer
*@str: input string
*Return: pointer
*/
char *_strdup(char *str)
{
	int i, size;
	char *m;

	if (str == NULL)
	return (NULL);
	for (size = 0; str[size] != '\0'; size++)
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	return (NULL);
	else
	{
		for (i = 0; i < size; i++)
		m[i] = str[i];
	}
	return (m);
}

#include <stdlib.h>
/**
*create_array - create array
*@size: input size of array
*@c: input char
*Return: pointer
*/
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
	return (0);
	while (size--)
	n[size] = c;
	return (n);
}

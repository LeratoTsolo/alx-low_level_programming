#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
*numcheck - check digits
*@str: input array
*Return: 0
*/
int numcheck(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		return (0);
		i++;
	}
	return (1);
}

/**
*main - print sum
*@argc: arg count
*@argv: arg vector
*Return: answer
*/
int main(int argc, char *argv[])
{
	int i;
	int intstr;
	int sum;

	sum = 0;
	i = 1;
	while (i < argc)
	{
		if (numcheck(argv[i]))
		{
		intstr = atoi(argv[i]);
		sum += intstr;
		}
		else
		{
		printf("Error\n");
		return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

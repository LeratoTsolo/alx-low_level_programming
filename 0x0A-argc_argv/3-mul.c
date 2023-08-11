#include <stdio.h>
#include "main.h"
/**
*_atoi - convert char to int
*@s: input char
*Return: value
*/
int _atoi(char *s)
{
	int i, d, l, n, f, r;

	i = 0;
	d = 0;
	n = 0;
	f = 0;
	l = 0;
	r = 0;

	while (s[l] != '\0')
	l++;
	while (i < l && f == 0)
	{
		if (s[i] == '-')
		d++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			r = s[i] - '0';
                        if (d % 2)
			r = -r;
			n = n * 10 + r;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
	return (0);
	return (n);
}

/**
*main - print resullt to multiplication
*@argc: arg count
*@argv: arg vector
*Return: answer
*/
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = _atoi(argv[1]);
		b = _atoi(argv[2]);
		c = a * b;
		printf("%d\n", c);
	}
	return (0);
}

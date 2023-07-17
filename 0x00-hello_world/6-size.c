#include <stdio.h>
/**
* main - print size of different data types.
* Return: (0) success
*/
int main(void)
{
	char c;
	int i;
	long int li;
	long long intt lli;
	float f;
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of int: &lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of float: %lu byte(s)\n", (unsinged long)sizeof(f));
	return (0);
}

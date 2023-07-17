#include <stdio.h>
/**
* main - print size of different data types.
* Return: (0) success
*/
int main(void)
{
	printf("Size a of char: %lu byte(s)\n", sizeof(char));
	printf("Size a of int: %lu byte(s)\n", sizeof(int));
	printf("Size a of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size a of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size a of float: %lu byte(s)\n", sizeof(float));
	return (0);
}

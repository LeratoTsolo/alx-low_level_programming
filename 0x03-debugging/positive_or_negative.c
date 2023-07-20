#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - print message based on value of number
*Return: (0) success
*/
void positive_or_negative(int i)
{
        int n;
        n = i;
        if (n == 0)
        printf("%d is zero\n", n);
        else if (n < 0)
        printf("%d is negative\n", n);
        else
        printf("%d is positive\n", n);
}

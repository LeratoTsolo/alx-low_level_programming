#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - print message based on value of number
*
* Retunr: (0) success 
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n == 0 )
        printf("%d is zero", n);
        else if ( n < 0 )
        printf("%d is negative", n);       
        else
        printf("%d is positive", n);
	return (0);
}

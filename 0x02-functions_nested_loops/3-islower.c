#include "main.h"
#include <ctype.h>
/**
*_islower - check for lowercase charactr
*@c: parameter
 *Return: (1) or (0)
*/
int _islower(int c)
{
        if (c > 'a' && c <= 'z')
        {
        return (1);
        }
        else
        return(0);
}

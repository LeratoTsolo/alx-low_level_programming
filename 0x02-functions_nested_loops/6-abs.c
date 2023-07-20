#include "main.h"
#include <inttypes.h>
/**
*_abs - compute absolute value.
*@i: parameter
*Return: (0) success
*/
int _abs(int i)
{
	if (i < 0)
	{
	i = i * -1;
	return (i);
	}
	else
	return (i);
}

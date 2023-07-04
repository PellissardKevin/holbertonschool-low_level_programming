#include "main.h"
#include <stdlib.h>
/**
 * _abs - compute absolute value
 * @c: parameter
 * Return: a value of absolute
 */

int _abs(int c)
{
	return (c*((c*2+1)%2));
}

#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - print n random int and tell if is positive or not
 * Return: 0 is success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative", n);
	}
	else if(n > 0)
	{
		  printf("%d is positive", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	return (0);
}

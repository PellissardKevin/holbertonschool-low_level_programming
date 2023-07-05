#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print sum of positive number
 * @argc: number of arguments
 * @argv: list of argument
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i, sum;

	for (i = 0; i < argc; i++)
		sum = sum + atoi(argv[i]);

	printf("%d\n", sum);

	return (0);
}

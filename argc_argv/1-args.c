#include <stdio.h>
#define UNUSED(argv) (void)(argv)
/**
 * main - print all arguments
 * @argc: int
 * @argv: list arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", (argc - 1));

	return (0);
}

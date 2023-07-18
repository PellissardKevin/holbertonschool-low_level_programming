int main(int argc, char *argv[])
{
	int (*fptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fptr = get_op_func(argv[2]);

	if (!fptr)
	{
		printf("Error\n");
		exit(99);
	}
}

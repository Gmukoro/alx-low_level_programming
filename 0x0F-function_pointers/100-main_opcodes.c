#include <stdlib.h>
#include <stdio.h>

/**
 * stdout_opcodes - A funct that prints opcodes
 * @a: Address of the main function
 * @n: The numb of bytes to print
 *
 * Return: void
 */
void stdout_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - Prints the opcodes of its own funct
 * @argc: Arg count_numb of arguments passed to the function
 * @argv: Arg vector_array of pointers to arguments
 *
 * Return: always O
 */
int main(int argc, char **argv)
{
	int t;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	t = atoi(argv[1]);
	if (t < 0)
	{
		printf("Error\n");
		exit(2);
	}
	stdout_opcodes((char *)&main, t);
	return (0);
}

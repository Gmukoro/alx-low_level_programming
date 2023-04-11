#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers.
 * @argc: Argument count
 * @argv: Arguments vector
 *
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int m, n;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	m = atoi(argv[1]);
	n = atoi(argv[2]);
	printf("%d\n", m * n);

	return (0);
}

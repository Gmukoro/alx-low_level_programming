#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program thatadds positive numbers.
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int baseValue, value, sum = 0;
	char *mem;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (baseValue = 1; argv[baseValue]; baseValue++)
	{
		value = strtol(argv[baseValue], &mem, 10);
		if (*mem)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += value;
		}
	}
	printf("%d\n", sum);

	return (0);
}

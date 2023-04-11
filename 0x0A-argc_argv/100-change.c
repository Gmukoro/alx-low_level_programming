#include <stdio.h>
#include <stdlib.h>

/**
 * main - A prog that prints the min number of coins to make change
 * @argc: Argument count(length)
 * @argv: Arguments(count)
 * Return: 0
 */
int main(int argc, char **argv)
{
	int total, count;
	unsigned int t;
	char *mem;
	int coins[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &mem, 10);
	count = 0;

	if (!*mem)
	{
		while (total > 1)
		{
			for (t = 0; t < sizeof(coins[t]); t++)
			{
				if (total >= coins[t])
				{
					count += total / coins[t];
					total = total % coins[t];
				}
			}
		}
		if (total == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}

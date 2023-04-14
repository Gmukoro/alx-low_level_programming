#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that multiplies two positive numbers
 * @argc: Arguments count
 * @argv: Arguments vector
 * Return: Integer
 */
int main(int argc, char *argv[])
{
	unsigned long multiply;
	int count1, count2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (count1 = 1; count1 < argc; count1++)
	{
		for (count2 = 0; argv[count1][count2] != '\0'; count2++)
		{
			if (argv[count1][count2] > 57 || argv[count1][count2] < 48)
			{
				printf("Error\n");
				exit(98);
			}

		}

	}

	multiply = atol(argv[1]) * atol(argv[2]);

	printf("%lu\n", multiply);

	return (0);

}

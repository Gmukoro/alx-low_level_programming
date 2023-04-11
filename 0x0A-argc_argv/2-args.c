#include "main.h"
#include <stdio.h>

/**
* main - A program that prints all arg received
* @argc: Arg count
* @argv: Arg vector
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int length = 0;

	if (argc > 0)

		while (argc < length)
		{
			printf("%s\n", argv[length]);
			length++;
		}
	return (0);
}

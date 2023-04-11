#include <stdio.h>

/**
* main - A program that prints all arg received
* @argc: Arg count
* @argv: Arg vector
*
* Return: 0
*/

int main(int argc, char **argv)
{
	int length;

	for (length = 0; length < argc; length++)
		printf("%s\n", argv[length]);
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
* main - A function that prints num of args. passed
* @argc: Arg count
* @argv: Arg vector
*
* Return: 0
*/

int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);

}

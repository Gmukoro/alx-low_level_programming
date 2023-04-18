#include <stdio.h>

/**
* main - A program that prints the name it was compiled from
*
* Return: Void
*/

int main(void)
{
	printf("%s", __FILE__);
	printf("\n");
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that print
 * s reversed letters of the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

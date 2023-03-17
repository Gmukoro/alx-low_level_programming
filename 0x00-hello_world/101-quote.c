#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints a line to the standard error
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char str1[] = "and that piece of art is useful\" - 'Dora Kor
par, 2015-10-19\n";

	write(2, str1, 59);
return (1);
}

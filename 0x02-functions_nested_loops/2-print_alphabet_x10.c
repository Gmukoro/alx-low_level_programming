#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: A function that prints 10 times the alphabet, in lower
 * case, followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void);
{
	int i;
	char x;

	for (i = 'a' ; i <= 10 ; i++)
	{

		for (x = 'a' ; x <= 'z' ; x++)
			_putchar(x);
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: A function that prints 10 times the alphabet, in lower
 * case, followed by a new line
 *
 */

void print_alphabet_x10(void);
{
	int i = 0;
	char letter;

	while (i++ <= 9)
	{

		for (letter = 'a' ; letter <= 'z' ; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}

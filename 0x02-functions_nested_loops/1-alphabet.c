#include "main.h"


/**
 * print_alphabet - Entry Point
 * Description: A program that prints the alphabet in lower
 * case follow by a new linee.
 *
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}

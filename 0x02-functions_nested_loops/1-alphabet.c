#include "main.h"


/**
 * print_alphabet - Entry Point
 * Description: A program that prints the alphabet in lower
 * case follow by a new linee.
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)

{
	char i;

	for (i = 'a'; i <= 'zi'; i++)
		_putchar(i);
	_putchar('\n');
}

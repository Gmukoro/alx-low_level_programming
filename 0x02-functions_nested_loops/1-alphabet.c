#include "main.h"
/**
 * main - Entry Point
 * Description: A program that prints the alphabet in lower
 * case follow by a new linee.
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)

{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

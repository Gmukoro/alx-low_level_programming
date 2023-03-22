#include "main.c"
/**
 * main - Entry Point
 * Description: A program that prints the alphabet in lower
 * case follow by a new line
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i < 'z' ; i++)
		_putchar (i);
	_putchar ('\n');


}

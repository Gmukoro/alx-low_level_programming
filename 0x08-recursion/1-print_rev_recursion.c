#include "main.h"

/**
* _print_rev_recursion - Function that prints string in rev
* @s: Str to be printed
*
* Return: printed string in rev
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}

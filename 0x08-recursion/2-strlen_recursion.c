#include "main.h"

/**
* _strlen_recursion - A program that prints d length of strings
* @s: Strlen to be checked
*
* Return: Strlen of s
*/

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}

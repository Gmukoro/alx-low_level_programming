#include "main.h"

/**
 * _isdigit - A program that checks for digits
 * @c: Parameter
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

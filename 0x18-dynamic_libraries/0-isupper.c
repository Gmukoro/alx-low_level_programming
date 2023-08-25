#include "main.h"

/**
 * _isupper - A program that checks uppercase
 * @c: Parameter
 * Return: 0 if sucessful
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

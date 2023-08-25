#include "main.h"
/**
 * _strlen - A program that checks string lenght
 * @s: params
 * Return: int
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}

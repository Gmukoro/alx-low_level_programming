#include "main.h"

/**
 * _strpbrk - A program that matches any character specified
 * @s: This is the C string to be scanned.
 * @accept:character in str1 that matches one of the characters in str2
 *Return: string s that matches any character specified in accept
 **/

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0') /*Declaring WHILE*/
	{
		j = 0;
		while (accept[j] != '\0')  /*Evaluating *accept*/
		{
			if (*s == accept[j])
			{
				return (s);
			}

			j++;
		}

		s++;
	}
	return (0);
}

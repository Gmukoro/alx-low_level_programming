#include "main.h"

/**
* _strlen - checks for len of str
* @s: The string to be checked
* Return: Always 0
*/

int _strlen(char *s)
{
	int a = 0; /*Start the counter from 0*/

	for (; *s++;)
		a++;
	return (a);
}

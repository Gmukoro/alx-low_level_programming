#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - A function that prints name using pointer to funct
* @name: Name to be printed
* @f: Ptr to function
*
* Return: Void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
		return;
	f(name);
}

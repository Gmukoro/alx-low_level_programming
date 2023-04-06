#include "main.h"

/**
* factorial - A function that returns the factorial of num
* @n: The num
*
* Return: Integer or num
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

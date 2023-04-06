#include "main.h"

/**
 * check - Checks for the square root int
 * @a: Integer 1 to bd checked
 * @b: Integer 2 to be checked
 *
 * Return: Integer
 */
int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}


/**
* _sqrt_recursion - A function that returns nat sqrt of int
* @n: Integer to find its sqrt
*
* Return: If no natural sqrt return 0
* return sqrt,
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}

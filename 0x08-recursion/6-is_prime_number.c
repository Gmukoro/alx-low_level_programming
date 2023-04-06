#include "main.h"

/**
 * check - A program that checks if number is a prime
 * @a: Integer 1 being checked
 * @b: Integer 2 being checkdd
 * Return: Integer
 */
int check(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check(a + 1, b));
}

/**
 * is_prime_number - A funct that states if an int is prime
 * @n: Integer being checked
 * Return: Integer result
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}

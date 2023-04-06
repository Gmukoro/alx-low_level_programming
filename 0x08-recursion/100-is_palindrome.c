#include "main.h"
/**
 * _strlen_recursion - A funct prints the length of a string.
 * @s: The string to be printed
 * Return: The length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * pal_checker - A funct that checks if s is palindrome.
 * @s: Base address for string.
 * @t: left index.
 * @j: Rigth index.
 * Return: 1 if s is palindrome, else 0.
 */
int pal_checker(char *s, int t, int j)
{
	if (s[t] == s[j])
		if (t > j / 2)
			return (1);
		else
			return (pal_checker(s, t + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - Checks if s is palindrome
 * @s: Address for string.
 *
 * Return: 1 if n is prime, else 0.
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}

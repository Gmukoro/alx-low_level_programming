#include "main.h"

/**
 * str_checker - A funct that checks if two strings are identical.
 * @s1: String-1 base address.
 * @s2: String-2 base address.
 * @t: First index.
 * @j: Second index.
 * Return: 1 if s is palindrome,else 0.
 */
int str_checker(char *s1, char *s2, int t, int j)
{
	if (s1[t] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[t] == s2[j])
		return (str_checker(s1, s2, t + 1, j + 1));
	if (s1[t] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, t, j + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, t + 1, j) || str_checker(s1, s2, t, j + 1));
	return (0);
}
/**
 * wildcmp - A program that checks if strings are identical
 * @s1: Base address f0or string1.
 * @s2: Base address for string2.
 *
 * Return: 1 if theyre considered identical.
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}

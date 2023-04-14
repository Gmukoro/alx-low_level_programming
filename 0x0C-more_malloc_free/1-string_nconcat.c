#include "main.h"

/**
 * string_nconcat - A function that concatenates two strings.
 * @s1: First string
 * @s2: Fecond string
 * @n: Numb
 * Return: Pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int count1 = 0, count2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[count1] != '\0')
	{
		count1++;
	}

	while (s2[count2] != '\0')
	{
		count2++;
	}

	if (n > count2)
		n = count2;
	mem = malloc((count1 + n + 1) * sizeof(char));

	if (mem == NULL)
		return (0);

	for (i = 0; i < count1; i++)
	{
		mem[i] = s1[i];
	}

	for (; i < (count1 + n); i++)
	{
		mem[i] = s2[i - count1];
	}
	mem[i] = '\0';
	return (mem);
}

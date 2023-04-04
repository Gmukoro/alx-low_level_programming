#include "main.h"

/**
* _strspn - A function that gets d length of prefix substr
* @s: Bytes in the initial segment
* @accept: Location of the bytes
*
* Return: Numbers of bytes in s
*/

unsigned int _strspn(char *s, char *accept)
{
	int t = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)

				if (s[i] == accept[j])
					t++;

		}
		else
			return (t);
	}
		return (t);

}


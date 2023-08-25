#include "main.h"
/**
 *_strcat - A program concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will also be changed
 *Return: Dest
 */

char *_strcat(char *dest, char *src)
{
int t, j;

t = 0;
while (dest[t] != '\0')
{
	t++;
}

j = 0;
while (src[j] != '\0')
{
dest[t] = src[j];
j++;
t++;
}
dest[t] = '\0';

return (dest);
}

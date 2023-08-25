#include "main.h"
/**
 *_memcpy -   Copies number bytes form adress "from" to adress "to"
 *@dest: Content is to be copied
 *@src: Source of data to be copied
 *@n: Bytes of the memory
 *Return: Best
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i); /*add 1 position dest and src*/
		i++;

	}


	return (dest);
}

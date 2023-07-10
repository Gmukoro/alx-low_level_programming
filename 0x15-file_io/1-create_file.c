#include "main.h"
#include <stddef.h>

/**
* create_file - A program that creates a file
* @filename: Pointer
* @text_content: Content
* Return: 1 on success or -1 if error
*/

int create_file(const char *filename, char *text_content)
{
	int file;
	int wr;
	int count = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (!text_content)
		return (1);
	while (text_content[count])
		count++;
	wr = write(file, text_content, count);
	if (wr == -1)
		return (-1);
	close(file);
	return (1);
}

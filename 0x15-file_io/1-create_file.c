#include "main.h"
/**
* create_file - A function that creates a file
* @filename: Pointer to filename
* @text_content: Content to be created
* Return: 1 on success or -1 if error
*/

int create_file(const char *filename, char *text_content)
{
	int fileCreate;
	int content;
	int contentCount = 0;

	if (!filename)
		return (-1);
	fileCreate = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fileCreate == -1)
		return (-1);
	if (!text_content)
		return (1);
	while (text_content[contentCount])
		contentCount++;
	content = write(fileCreate, text_content, contentCount);
	if (content == -1)
		return (-1);
	close(fileCreate);
	return (1);
}

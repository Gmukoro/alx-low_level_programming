#include "main.h"

/**
 * append_text_to_file - A program that appends text at the end of a file
 * @filename: The name of the file to be appended
 * @text_content: String to add at end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int copiedFile;
	int fileWrite;
	int numStr;

	if (filename == NULL)
		return (-1);
	copiedFile = open(filename, O_APPEND | O_RDWR, 0664);
	if (copiedFile == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (numStr = 0; text_content[numStr]; numStr++)
			;
		fileWrite = write(copiedFile, text_content, numStr);
		if (fileWrite == -1)
			return (-1);
	}
	close(copiedFile);
	return (1);
}

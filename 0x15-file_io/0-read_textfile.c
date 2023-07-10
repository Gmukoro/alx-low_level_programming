#include "main.h"

/**
 * read_textfile - A program that opens, read, write and close a
 *		file in STDOUT
 * @filename: A pointer to the name of the file to be
 *            written to STDOUT
 * @letters: ....
 *
 * Return: 0 if the file could not be accessed.
 *         0 if the filename is NULL.
 *         0 if write fails
 *         return the expected size(letters) if successful
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int text;
	int re;
	char *reed;

	reed = malloc(sizeof(char) * letters + 1);
	if (!re || !filename)
		return (0);

	text = open(filename, O_RDONLY);
	if (text == -1)
	{
		free(reed);
		return (0);
	}
	re = read(text, reed, letters);
	if (re == -1)
	{
		close(text);
		free(reed);
		return (0);
	}
	reed[re] = '\0';
	if ((write(STDOUT_FILENO, reed, re)) == -1)
	{
		close(text);
		free(reed);
		return (0);
	}
	close(text);
	free(reed);
	return (re);
}

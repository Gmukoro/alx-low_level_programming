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
	int st;
	int reading;
	char *reed;

	reed = malloc(sizeof(char) * letters + 1);
	if (!reed || !filename)
		return (0);

	st = open(filename, O_RDONLY);
	if (st == -1)
	{
		free(reed);
		return (0);
	}
	reading = read(st, reed, letters);
	if (reading == -1)
	{
		close(st);
		free(reed);
		return (0);
	}
	reed[reading] = '\0';
	if ((write(STDOUT_FILENO, reed, reading)) == -1)
	{
		close(st);
		free(reed);
		return (0);
	}
	close(st);
	free(reed);
	return (reading);
}

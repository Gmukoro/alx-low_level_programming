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
	ssize_t opn, reed, wrt;
	char *bufsiz;

	if (!filename)
	{
		return (0);
	}

	bufsiz = malloc(sizeof(char) * letters);

	if (!bufsiz)
	{
		return (0);
	}

	opn = open(filename, O_RDONLY);
	reed = read(opn, bufsiz, letters);
	wrt = write(1, bufsiz, reed);

	if (wrt != reed || opn == -1 || reed == -1 || wrt == -1)
	{
		free(bufsiz);
		return (0);
	}
	free(bufsiz);
	close(opn);

	return (wrt);
}

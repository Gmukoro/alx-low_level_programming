#include "main.h"

/**
 * cp - A program copies src file to desinations
 * @file_to: The destination file
 * @file_from: The source file
 * Return: ...
 */
int cp(char *file_to, char *file_from)
{
	char *buffer[1024];
	int d, f, r, fw, cit, ftc;

	f = open(file_from, O_RDONLY);
	if (f < 0)
		return (98);

	d = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (d < 0)
		return (99);

	r = read(d, buffer, 1024);
	if (r < 0)
		return (98);
	while (r > 0)
	{
		fw = write(d, buffer, r);
		if (fw < 0)
			return (99);
		r = read(d, buffer, 1024);
		if (r < 0)
			return (98);
	}

	cit = close(d);
	if (cit < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close d %d\n", cit);
		return (100);
	}
	ftc = close(d);
	if (ftc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close d %d\n", ftc);
		return (100);
	}
	return (0);
}

/**
 * main - Entry point
 * @ac: Argument count
 * @av: Argument vector
 * Return: always 0
 */
int main(int ac, char **av)
{
	int fr;

	if (ac != 3)

	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fr = cp(av[2], av[1]);

	switch (fr)

	{

		case (98):

			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);

			exit(98);

		case (99):

			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);

			exit(99);

		case (100):

			exit(100);

		default:

			return (0);

	}

}

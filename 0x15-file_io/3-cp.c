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
	int td, fd, r, fw;
	int c, t;

	fd = open(file_from, O_RDONLY);
	if (fd < 0)
		return (98);

	td = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (td < 0)
		return (99);

	r = read(fd, buffer, 1024);
	if (r < 0)
		return (98);
	while (r > 0)
	{
		fw = write(td, buffer, r);
		if (fw < 0)
			return (99);
		r = read(fd, buffer, 1024);
		if (r < 0)
			return (98);
	}

	fc = close(fd);
	if (c < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c);
		return (100);
	}
	t = close(td);
	if (t < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", t);
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
	int c;

	if (ac != 3)

	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	c = cp(av[2], av[1]);

	switch (c)

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

#include "main.h"

/**
 * copy - A program that copies src to desination
 * @file_to: Destination file
 * @file_from: Source file
 * Return: Int
 */
int copy(char *file_to, char *file_from)
{
	char *buffer[1024];
	int fdo, fd, fr, fw;
	int vic, factvic;

	fd = open(file_from, O_RDONLY);
	if (fd < 0)
		return (98);

	fdo = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdo < 0)
		return (99);

	fr = read(fd, buffer, 1024);
	if (fr < 0)
		return (98);
	while (fr > 0)
	{
		fw = write(fdo, buffer, fr);
		if (fw < 0)
			return (99);
		fr = read(fd, buffer, 1024);
		if (fr < 0)
			return (98);
	}

	vic = close(fd);
	if (vic < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", vic);
		return (100);
	}
	factvic = close(fdo);
	if (factvic < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", factvic);
		return (100);
	}
	return (0);
}

/**
 * main - Entry point
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0
 */
int main(int ac, char **av)
{
	int Caps;

	if (ac != 3)

	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	Caps = copy(av[2], av[1]);

	switch (Caps)

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

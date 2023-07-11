#include "main.h"

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int t, fd_t, fd_w, s, n;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_t = open(argv[1], O_RDONLY);
	if (fd_t < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((t = read(fd_t, buf, BUFSIZ)) > 0)
	{
		if (fd_w < 0 || write(fd_w, buf, t) != t)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_t);
			exit(99);
		}
	}
	if (t < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	s = close(fd_t);
	n = close(fd_w);
	if (s < 0 || n < 0)
	{
		if (s < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_t);
		if (n < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);
		exit(100);
	}
	return (0);
}

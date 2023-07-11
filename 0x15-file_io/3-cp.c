#include "main.h"

/**
 * cp - A program copies src file to desinations
 * @file_to: The destination file
 * @file_from: The source file
 * Return: ...
 */
void close_file(int filedesc)
{
	int print;

	print = close(filedesc);

	if (print < 0)
	{
		if (print < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filedesc);
		exit(100);
	}
}

/**
 * main - Entry point
 * @ac: Argument count
 * @av: Argument vector
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int rd, cop_a, cop_b, wt;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);

	cop_a = open(argv[1], O_RDONLY);
	if (cop_a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buf = malloc(sizeof(char) * 1024);
	if (!buf)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s/n", argv[2]);
		exit(99);
	}
	rd = read(cop_a, buf, 1024);
	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cop_b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	wt = write(cop_b, buf, rd);
	if (wt < 0 || rd != wt)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s/n", argv[2]);
		close(cop_a);
		free(buf);
		exit(99);
	}
	close_file(cop_a);
	close_file(cop_b);
	return (0);
	}
}

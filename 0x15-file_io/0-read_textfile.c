#include "main.h"

/**
* read_textfile - A function that reads a file and prints to stdout
* @filename:Pointer to the file
* @letters: Letters
* Return: Numbers of letters it read or 0 if error
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int readText;
	int reading;
	char *mem;

	mem = malloc(sizeof(char) * letters + 1);
	if (!mem || !filename)
		return (0);

	readText = open(filename, O_RDONLY);
	if (readText == -1)
	{
		free(mem);
		return (0);
	}
	reading = read(readText, mem, letters);
	if (reading == -1)
	{
		close(readText);
		free(mem);
		return (0);
	}
	mem[reading] = '\0';
	if ((write(STDOUT_FILENO, mem, reading)) == -1)
	{
		close(readText);
		free(mem);
		return (0);
	}
	close(readText);
	free(mem);
	return (reading);
}

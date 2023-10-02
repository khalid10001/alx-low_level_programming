#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it.
 * @filename: name of the file
 * @letters: size of the letters
 * Return: returns the actual number of letters it could read and print
 *	otherwise if the file can not be opened or read returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t b;
	char buffer[READ_BUF_SIZE * 8];

	if (filename == NULL)
	{
		return (0);
	}
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (-1);
	}
	b = read(f, &buffer[0], letters);
	b = write(STDOUT_FILENO, &buffer[0], b);
	close(f);
	return (b);
}

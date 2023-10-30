#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints it
 * @filename: name of file
 * @letters: number of letters
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t a, b;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
		return (0);

	a = read(fd, buff, letters);
	b = write(STDOUT_FILENO, buff, a);

	close(fd);
	free(buff);

	return (b);
}

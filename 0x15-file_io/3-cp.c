#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_READ "Error: Can't read from file NAME_OF_THE_FILE %s\n"
#define ERR_WRITE "Error: Can't write to NAME_OF_THE_FILE %s\n"
#define ERR_CLOSE "Error: Can't close fd FD_VALUE %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - a program that copies the content of a file to another file
 * @argc: integer variable
 * @argv: pointer character variable with array
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int from_f = 0, to_f = 0;
	ssize_t b;
	char buffer[READ_BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_f = open(argv[1], O_RDONLY);
	if (from_f == -1)
		dprintf(STDERR_FILENO, ERR_READ, argv[1]), exit(98);
	to_f = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_f == -1)
		dprintf(STDERR_FILENO, ERR_WRITE, argv[2]), exit(99);
	while ((b = read(from_f, buffer, READ_BUF_SIZE)) > 0)
		if (write(to_f, buffer, b) != b)
			dprintf(STDERR_FILENO, ERR_WRITE, argv[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, ERR_READ, argv[1]), exit(98);
	from_f = close(from_f);
	to_f = close(to_f);
	if (from_f)
		dprintf(STDERR_FILENO, ERR_CLOSE, from_f), exit(100);
	if (to_f)
		dprintf(STDERR_FILENO, ERR_CLOSE, from_f), exit(100);
	return (EXIT_SUCCESS);
}

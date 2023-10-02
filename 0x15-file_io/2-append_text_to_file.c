#include "main.h"

/**
 * _strlen - a function that return the length
 * @str: length string
 * Return: returns the length of string
 */
int _strlen(char *str)
{
	int x = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (*str++)
	{
		x++;
	}
	return (x);
}

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: text
 * Return: returns 1 on success otherwise returns -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t b = 0;
	ssize_t l = _strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
	{
		return (-1);
	}
	if (l != 0)
	{
		b = write(f, text_content, l);
	}
	close(f);
	if (b == l)
		return (1);
	else
		return (-1);
}

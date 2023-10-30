#include "main.h"

/**
* append_text_to_file - a function that appends text to the file.
* @filename: name of the file
* @text_content: content of file
*
* Return: 1 on success, 0 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, x;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (x = 0; text_content[x]; x++)
		;

	write(fd, text_content, x);
	close(fd);
	return (1);
}

#include "main.h"
/**
 * append_text_to_file - Function that appends text at the end of a file.
 * @filename: Name of the file to create
 * @text_content:Is a NULL terminated string to write to the file
 * Return:1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int  fd = 0, wd = 0, letters = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	while (text_content[letters])
	{
		letters++;
	}
	wd = write(fd, text_content, letters);
	if (wd == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}

#include "holberton.h"

/**
*append_text_to_file - add text
*@filename: name of file
*@text_content: string print
*
*Return: letters prints
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	for (i = 0; text_content && text_content[i]; i++)
	{
		if (write(fd, &text_content[i], 1) == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}


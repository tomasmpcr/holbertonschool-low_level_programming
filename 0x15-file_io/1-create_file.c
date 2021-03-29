#include "holberton.h"

/**
*create_file - create file
*@filename: name of file
*@text_content: string print
*
*Return: letters prints
*/
int create_file(const char *filename, char *text_content)
{
	int fd = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR, 0600);
	if (fd < 0)
		return (-1);

	while(text_content && *text_content)
	{
		if (write(fd, text_content, 1) == -1)
			return (-1);
		text_content++;
	}

	close(fd);
	return (1);
}

#include "holberton.h"

/**
 * main - comand cp.
 *@ac: int len
 *@av: array
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd, fd2, i = 0, sz = 0, sz2 = 0;
	char *c = NULL;

	if (ac != 3)
	{
		dprintf(1, "Usage: cp file_from file_to\n");
		exit(98);
	}

	fd = open(av[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd2 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	for (i = 1; 1 == 1; i++)
	{
		c = NULL;
		c = malloc(1024 * sizeof(char));
		sz = read(fd, c, 1024);
		if (sz < 0)
		{
			free(c);
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}

		sz2 = write(fd2, c, sz);
		free(c);
		if (sz2 < 0 || sz2 < sz)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}

		if (sz == 0 || sz < 1024)
			break;
	}

	if (close(fd) != 0)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd);
		exit(100);
	}

	if (close(fd2) != 0)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd2);
		exit(100);
	}

	return (0);
}

#include "main.h"
/**
 * main - Copies the content of a file to another file.
 * @ac: Number of arguments.
 * @av: Array of arguments.
 * Return: On success, returns 0. On error, returns an error code.
 */
int main(int ac, char **av)
{
	int res;
	ssize_t n;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}

	/* Read the content of the source file */
	n = read_textfile(av[1], 1024);
	if (n == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	/* Create the destination file and write the content to it */
	res = create_file(av[2], NULL);
	if (res == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	res = append_text_to_file(av[2], av[1]);
	if (res == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	return (0);
}

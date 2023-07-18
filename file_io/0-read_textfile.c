#include "main.h"

/**
 * read_textfile - opens a file in POSIX
 * @filename: file name
 * @letters: number of letters to print
 * Return: result
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t readbyte;
	char *buff;
	FILE *file;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buff = malloc(sizeof(char) * (letters + 1));
	if (buff == NULL)
	{
		fclose(file);
		return (0);
	}

	readbyte = fread(buff, sizeof(char), letters, file);
	if (readbyte == 0)
	{
		free(buff);
		fclose(file);
		return (0);
	}

	buff[readbyte] = '\0';
	printf("%s", buff);

	free(buff);
	fclose(file);

	return(readbyte);
}

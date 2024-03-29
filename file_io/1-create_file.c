#include "main.h"

/**
 * create_file - creates a file with specified content
 * @filename: name of the file to create
 * @text_content: content to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, index = 0;

	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[index])
			index++;
		bytes_written = write(file_descriptor, text_content, index);
		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}

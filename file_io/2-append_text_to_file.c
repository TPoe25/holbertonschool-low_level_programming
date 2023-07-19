#include "main.h"

/**
 * append_text_to_file - appends file
 * @filename: file name
 * @text_content: content
 * Return: result
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t length;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		length = write(file, text_content, strlen(text_content));
		if (length == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}

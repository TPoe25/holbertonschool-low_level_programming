#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int file, bytes, index;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == 0)
		return (-1);

	if (text_content != NULL)
	{
		for (index = 0; text_content[index] != '\0'; index++);

		bytes = write(file, text_content, index);
		if (bytes == 0)
		{
			close(file);
			return (-1);
		}
	}
	close (file);

	return (1);
}

#include "main.h"

/**
 * append_text_to_file - Adds text at file end
 * @filename: Filename pointer
 * @text_content: String to add at file end
 * Return: -1 if filename is NULL, -1 for access violations, 1 for success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int p, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	w = write(p, text_content, length);

	if (p == -1 || w == -1)
		return (-1);

	close(p);

	return (1);
}

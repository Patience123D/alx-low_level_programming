#include "main.h"

/**
 * create_file - Creates a file with a content
 * @filename:The name of the file
 * @text_content: The content
 * Return: 1 or  -1
 */
int create_file(const char *filename, char *text_content)
{
	int d, i;

	if (filename == NULL)
		return (-1);
	d = open(filename, O_RDWR | O_TRUNC);
	if (d < 0)
		d = open(filename, O_WRONLY | O_CREAT, 0600);
	if (d >= 0)
	{
		for (i = 0; text_content != NULL && *(text_content + i) != '\0'; i++)
		{
			if (write(d, text_content + i, 1) != 1)
				return (-1);
		}
		close(d);
	}
	return (1);
}

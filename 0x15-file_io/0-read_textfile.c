#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename:name of the text file
 * @letters:number of letters it should read and print
 * Return: The number of letters it can read and print, otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n = 0;
	int f, b;
	void *buf = malloc(sizeof(char) * 2);

	if (filename == NULL || buf == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f < 0)
		return (0);
	for (n = 0; n < (ssize_t)letters; n++)
	{
		b = read(f, buf, 1);
		if (b == 0)
			break;
		b = write(STDOUT_FILENO, buf, 1);
		if (b != 1)
			return (0);
	}
	close(f);
	free(buf);
	return (n);
}

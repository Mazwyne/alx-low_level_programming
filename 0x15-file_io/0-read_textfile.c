#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Will read the text file print to STDOUT.
 * @filename: is the text file that will be read
 * @letters: the number of the letters which will be read
 * Return: w- for the actual number of bytes that are read and printed
 *        0 if the function fails or the filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

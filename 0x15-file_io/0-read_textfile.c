#include "holberton.h"
/**
 * read_textfile - no se que putas estoy haciendo
 * @filename: no se para que sirve
 * @letters: me imagino que sera un entero positivo
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	unsigned int count;
	char *buf;

	buf = malloc(sizeof(char) * (letters));

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	count = read(fd, buf, letters);
	buf[count] = '\0';

	if (count <= 0 || fd <= 0)
		return (0);
	if (count < letters)
		write(STDOUT_FILENO, buf, letters);
	else if (count == letters)
		write(STDOUT_FILENO, buf, letters);
	else
		return (0);

	close(fd);
	free(buf);
	return (count);
}

#include "holberton.h"
/**
 * read_textfile - red un text file
 * @filename: puntero a un acrchivo para leer
 * @letters: tamaño del buffer
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return(0);
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return(0);
	}

	count = read(fd, buf, letters);
	if (count == -1)
	{
		free(buf);
		return (0);
	}
	
	if ((write(STDOUT_FILENO, buf, count) == -1))
	{
		free(buf);
		return (0);
	}

	close(fd);
	free(buf);
	return (count);
}

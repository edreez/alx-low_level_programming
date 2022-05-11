#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
* read_textfile - reads a text file
* @filename: path of the file to read
* @letters: number to of letters to read and print
* Return: Always 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t r, w;

	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (buf == 0)
		return (0);
	r = read(fd, buf, letters);

	w = write(STDOUT_FILENO, buf, r);
	close(fd);
	free(buf);
	return (w);
}

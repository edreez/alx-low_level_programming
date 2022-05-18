#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
* create_file - file to create
* @filename: name of the file to create
* @text_content: a null terminated string
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int count, len = 0, fd;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	count = write(fd, text_content, len);
	if (count == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

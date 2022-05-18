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
int append_text_to_file(const char *filename, char *text_content)
{
	int count, len = 0, fd, i;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);

	for (i = 0; text_content[i]; i++)
		len++;
	count = write(fd, text_content, len);
	if (count == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

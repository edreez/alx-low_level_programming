#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
* main - read only file
*
* Return: Always 0
*/

int main(void)
{
	int fd;

	fd = open("myname.txt", O_CREAT | O_WRONLY, 0600);
	if (fd == -1 && "myfile.txt" == NULL)
	{
		return (0);
	}

	write(fd, "Beautiful World\n", 17);
	close(fd);
	return (0);
}

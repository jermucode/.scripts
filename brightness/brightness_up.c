#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <getopt.h>
#include <ctype.h>
#include <unistd.h>

#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif

int main(int argc, char *argv[])
{
	int fd, openFlags;
	mode_t filePerms;
	ssize_t valRead;
	char buf[BUF_SIZE];

	/* Open brightnessfile */
	filePerms = S_IRUSR | S_IWUSR | S_IXUSR | S_IRGRP | S_IWGRP | S_IXGRP  |S_IROTH | S_IWOTH | S_IXOTH;
	fd = open("/sys/class/backlight/intel_backlight/brightness",O_RDWR,filePerms);
	if(fd == -1)
	{
		printf("%s\n",strerror(errno));
		exit(EXIT_FAILURE);
	}
	valRead = read(fd, buf, BUF_SIZE);
	if(valRead == -1)
	{
		printf("%s\n",strerror(errno));
		exit(EXIT_FAILURE);
	}

	printf("brightnessval is: %s\n",buf);

	exit(EXIT_SUCCESS);
	




}

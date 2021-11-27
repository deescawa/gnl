#include "get_next_line.h"
#include <stdio.h>

int main()
{
	int fd = open("/dev/random", O_RDONLY);
	char *line;

	if (fd < 0)
	{
		printf("open error\n");
		return (1);
	}
	for (;;)
	// for (int i = 0; i < 4; i++)
	{
		line = get_next_line(fd);
		if (!line)
		{
			printf("end programm\n");
			break;
		}
		// printf("line:--->%s<--\n", line);
		printf("%s", line);
		free(line);
	}
	return 0;
}

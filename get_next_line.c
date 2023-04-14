#include "get_next_line.h"
#include <fcntl.h>

char	*get_next_line(int fd)
{
	static char	*buffer;
	char	*line;
//	char	*next_line;
//	int	flag;
//
//	flag = 0;
	buffer = NULL;
	line = NULL;
	if (read (fd, 0, 0) < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	printf("1");
	while (read(fd, buffer, BUFFER_SIZE) && *buffer != '\n')
	{
		printf("2");
		line = ft_strjoin(line, buffer);
//		if (flag != 0)
//			break;
	}
	return (line);
}

int	main()
{
	printf("2");
	int fd = open("teste", O_RDONLY);
	printf("2");
	char *line = get_next_line(fd);
	printf("%s", line);
	free(line);
	// printf("2");
	// //get_next_line(fd);
	// //get_next_line(fd);
}

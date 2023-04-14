#include "get_next_line.h"
#include <fcntl.h>

char	*get_next_line(int fd)
{
	char	*buffer;
	char	*line;
	int rd = 0;
//	char	*next_line;
//	int	flag;
//
//	flag = 0;
	buffer = malloc(BUFFER_SIZE + 1);
	// buffer = NULL;
	line = NULL;
	if (read (fd, 0, 0) < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	int rd = read(fd, buffer, BUFFER_SIZE);
	printf("1: %s", buffer);
	while (rd = read(fd, buffer, BUFFER_SIZE))
	{
		printf("2");
		line = ft_strjoin(line, buffer);
//		if (flag != 0)
//			break;
	}
	return (line);
}
//  && *buffer != '\n'
int	main()
{
	int fd = open("teste", O_RDONLY);
	char *line = get_next_line(fd);
	//printf("%s", line);
	free(line);
	get_next_line(fd);
	free (line);
	// printf("2");
	// //get_next_line(fd);
	// //get_next_line(fd);
}

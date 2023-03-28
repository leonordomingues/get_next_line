//#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

char	*get_next_line(int fd)
{
	static char	*buffer;
	char	*line;
	int	i;

	// if (read (fd, 0, 0) < 0 || BUFFER_SIZE <= 0)
	// 	return (NULL);
	//line = (char *)malloc(ft_strlen(buffer) + 1);
	//if (!line)
	//	return (NULL);
	// while (read(fd, buffer, (BUFFER_SIZE / BUFFER_SIZE)) > 0)
	// {	
	while(read(fd, buffer, 1))
	{	
		
		if (buffer == '\n')
			break;
	}
	printf("%s\n", buffer);
}

int main(){
	int fd = open("teste", O_RDONLY);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
}
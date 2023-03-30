#include "get_next_line.h"
#include <fcntl.h>

char	*get_next_line(int fd)
{
	static char	buffer[1];
	char	*line;
	int	i;
	int	a;

	if (read (fd, 0, 0) < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	i = 0;
	line = NULL;
	while(read(fd, buffer, (BUFFER_SIZE / BUFFER_SIZE)))
	{	
		a = 0;
		while (buffer[i] != '\n' && buffer [i])
		{
			line = (char *)malloc(ft_strlen(buffer) + a + 1);
			if (!line)
				return (NULL);
			line[a++] = buffer[i++];
			if (line[a] != '\n')
				free (line);
			line [++a] = '\0';
		}
	}
	free (buffer);
	return (line);
}

int main(){
	int fd = open("teste", O_RDONLY);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
}

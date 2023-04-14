// #include "get_next_line.h"
// #include <fcntl.h>

// char	*mega_get_next_line(int fd)
// {
// 	static char	buffer[1];
// 	char	*prov;
// 	char	*line;
// 	int	i;
// 	int	a;

// 	if (read (fd, 0, 0) < 0 || BUFFER_SIZE <= 0)
// 		return (NULL);
// 	i = 0;
// 	a = 0;
// 	line = NULL;
// 	while (read(fd, buffer, (BUFFER_SIZE / BUFFER_SIZE)) && buffer[i] != '\n')
// 	{	
// 		prov = (char *)malloc(ft_strlen(buffer) + a + 1);
// 		line = (char *)malloc(ft_strlen(buffer) + a + 1);
// 		if (!line && !prov)
// 			return (NULL);
// 		*prov = buffer[i];
// 		line [a++] = *prov;
// 		if (line[a] != '\n' && line[a] != '\0')
// 			free (line);
// 		else
// 			line [a + 1] = '\0';
// 	}
// 	return (line);
// }

/*int main(){
	int fd = open("teste", O_RDONLY);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
}*/

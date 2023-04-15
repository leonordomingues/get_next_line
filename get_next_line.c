#include "get_next_line.h"
#include <fcntl.h>

/*int	main()
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
}*/

char    *get_next_line(int fd)
{
    static char    buffer[BUFFER_SIZE + 1];
    char    *line;
    int        i;

    buffer[BUFFER_SIZE] = 0;
    line = NULL;
    if (read (fd, 0, 0) < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    while ((i = read(fd, buffer, BUFFER_SIZE)))
    {
        line = ft_strjoin(line, buffer);
        if (check_new_line(buffer))
            break ;
    }
    return (line);
}

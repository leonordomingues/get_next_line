#include "get_next_line.h"
#include <fcntl.h>

char    *get_next_line(int fd)
{
    static char    buffer[BUFFER_SIZE + 1];
    char    *line;
    int	i;

    i = 0;
    line = NULL;
    if (read (fd, 0, 0) < 0 || BUFFER_SIZE <= 0)
    {
        while (buffer[i])
            buffer[i++]= 0; 
        return (NULL);
    }
    while (*buffer || read(fd, buffer, BUFFER_SIZE) > 0)
    {
        line = ft_strjoin(line, buffer);
        if (check_new_line(buffer))
            break ;
    }
    return (line);
}

// int main()
// {
//      int fd = open("teste", O_RDONLY);
//      char *line = NULL;
//      while ((line = get_next_line(fd)))
//      {
//          printf("%s", line);
//          free(line);
//      }
//      close(fd);
//      return (0);
// }

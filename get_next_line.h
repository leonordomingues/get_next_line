#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
#endif

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

//char	*mega_get_next_line(int fd);
char	*get_next_line(int fd);
char	*ft_strjoin(char *line, char *buffer);
int		ft_strlen(char *str);

#endif

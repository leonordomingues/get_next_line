#include "get_next_line.h"

char	*ft_strdup(char *buffer)
{
	char	*line;

	line = (char *)malloc(ft_strlen(buffer) + 1);
	if (!line)
		return (NULL);
	while (buffer && line)
		*buffer++ = *line++;
	*line = '\0';
	return (line);
}

int	ft_strlen(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		++i;
	return (i);
}

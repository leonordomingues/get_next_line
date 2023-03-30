#include "get_next_line.h"

/*char	*ft_strdup(char *buffer)
{
	char	*line;

	line = (char *)malloc(ft_strlen(buffer) + 1);
	if (!line)
		return (NULL);
	while (*line && *buffer)
		*line++ = *buffer++;
	*line = '\0';
	return (line);
}*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

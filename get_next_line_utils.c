#include "get_next_line.h"

char	*ft_strjoin(char *line, char *buffer)
{
	char	*prov;
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	prov = (char *)malloc(ft_strlen(line) + ft_strlen(buffer) + 1);
	if (!prov)
		return (NULL);
	while (line && line[k])
		prov[i++] = line[k++];
	while (buffer && buffer[j] != '\n')
		prov[i++] = buffer[j++];
	prov[i] = '\0';
	if (line)
		free (line);
	return (prov);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return 0;
	while (str[i])
		i++;
	return (i);
}

int	check_new_line(char *str)
{
	int	i;

	i = -1;
	while (str && str[++i])
	{
		if (str[i] == '\n')
			return (1);
	}
	return (0);
}
// && str[i] != '\n'
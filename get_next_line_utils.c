#include "get_next_line.h"

char	*ft_strjoin(char *line, char *buffer)
{
	char	*prov;
	int i = 0;
	int j = 0;
	int k = 0;

	prov = (char *)malloc(ft_strlen(line) + ft_strlen(buffer) + 1);
	if (!prov)
		return (NULL);
	while (line[j])
		prov[i++] = line[j++];
	while (buffer[k] && buffer[k] != '\n')
		prov[i++] = buffer[k++];
	prov[i] = '\0';
//	if (prov[i] - 1 == '\n')
//		flag++;
	if (line)
		free (line);
	return (prov);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
//  && str[i] != '\n'
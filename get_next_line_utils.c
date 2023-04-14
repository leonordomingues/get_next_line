#include "get_next_line.h"

char	*ft_strjoin(char *line, char *buffer)
{
	char	*prov;

	prov = (char *)malloc(ft_strlen(line) + ft_strlen(buffer) + 1);
	if (!prov)
		return (NULL);
	while (*line)
		*prov++ = *line++;
	while (*buffer && *buffer != '\n')
		*prov++ = *buffer++;
	*prov = '\0';
//	if (*prov - 1 == '\n')
//		flag++;
	free (line);
	return (prov);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

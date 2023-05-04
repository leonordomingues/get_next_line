/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:04:37 by lda-cunh          #+#    #+#             */
/*   Updated: 2023/05/04 18:13:54 by lda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// char	*ft_strjoin(char *line, char *buffer)
// {
// 	char	*prov;
// 	int	i;

// 	i = -1;
// 	prov = (char *)malloc(ft_strlen(line) + ft_strlen(buffer) + 1);
// 	if (!prov)
// 		return (NULL);
// 	while (line && line[++i])
// 		prov[i] = line[i];
// 	while (*buffer)
// 	{
// 		prov[i++] = *buffer;
// 		if (*buffer++ == '\n')
// 			break;
// 	}
// 	prov[i] = '\0';
// 	if (line)
// 		free (line);
// 	return (prov);
// }
char	*ft_strjoin(char *line, char *buffer)
{
	char	*ret;
	int		i;

	ret = (char *)malloc((ft_strlen(line) + ft_strlen(buffer)) + 1);
	if (!ret)
		return (NULL);
	i = -1;
	while (line && line[++i])
		ret[i] = line[i];
	i += (!line);
	free(line);
	while (*buffer)
	{
		ret[i++] = *buffer;
		if (*buffer++ == '\n')
			break ;
	}
	ret[i] = '\0';
	return (ret);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	return (i + (str[i] == '\n'));
}

int	check_new_line(char *str)
{
	int	flag;
	int	i;
	int	j;

	flag = 0;
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			flag = 1;
			str[i++] = 0;
			break ;
		}
		str[i++] = 0;
	}
	if (flag)
	{
		while (str[i])
		{
			str[j++] = str[i];
			str[i++] = 0;
		}
	}
	return (flag);
}

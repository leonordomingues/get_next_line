/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:01:26 by lda-cunh          #+#    #+#             */
/*   Updated: 2023/05/05 15:56:25 by lda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <fcntl.h>

char	*get_next_line(int fd)
{
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;
	int			i;

	i = 0;
	line = NULL;
	if (read (fd, 0, 0) < 0 || BUFFER_SIZE < 1 || fd >= FOPEN_MAX)
	{
		if (fd > 0 && fd < FOPEN_MAX)
		{	
			while (buffer[fd] && buffer[fd][i])
				buffer[fd][i++] = 0;
		}
		return (NULL);
	}
	while (*(buffer[fd]) || read(fd, buffer[fd], BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, buffer[fd]);
		if (check_new_line(buffer[fd]))
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshehata <mshehata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 09:32:14 by mshehata          #+#    #+#             */
/*   Updated: 2022/12/06 16:13:02 by mshehata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*buffer;
	char	*line;
	int		n;
	int		i;
	size_t	buf_size;

	i = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf_size = (size_t)BUFFER_SIZE;
	buffer = malloc(sizeof(char) * (buf_size + 1));
	line = malloc(1);
	// n = read(fd, buffer, buf_size);
	while (!ft_strchr(line, '\n'))
	{
		n = read(fd, buffer, buf_size);
		line = ft_strjoin(line, buffer);
	}
	return (line);
}

int	main(void)
{
	int	fd;

	fd = open("sample.txt", O_RDONLY);
	printf("%s\n", get_next_line(fd));
	// printf("%s\n", get_next_line(fd));
}

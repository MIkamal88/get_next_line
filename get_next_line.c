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

size_t	find_endingpoint(const char *line, int index)
{
	static size_t	i;

	if (index == 0)
		i = 0;
	i += 1;
	while (line[index] != '\n')
	{
		if (line[index + 1] == '\n' || line[index + 1] == '\0')
		{
			i += 1;
			return (i);
		}
		i++;
		index++;
	}
	return (i);
}

char	*get_next_line(int fd)
{
	static char		*line;
	static size_t	index;
	char			*buffer;
	char			*print_out;
	size_t			buf_size;
	size_t			index_2;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buf_size = (size_t)BUFFER_SIZE;
	buffer = malloc(sizeof(char) * (buf_size));
	if (!buffer)
		return (0);
	if (!line)
	{
		line = malloc(1);
		index = 0;
	}
	while (!ft_strchr(buffer, '\n'))
	{
		read(fd, buffer, buf_size);
		line = ft_strjoin(line, buffer);
	}
	index_2 = find_endingpoint(line, index);
	print_out = ft_substr(line, index, (index_2 - index));
	index = index_2;
	return (print_out);
}

int	main(void)
{
	int	fd;

	fd = open("sample.txt", O_RDONLY);
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
}

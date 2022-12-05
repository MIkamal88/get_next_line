/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshehata <mshehata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 09:32:14 by mshehata          #+#    #+#             */
/*   Updated: 2022/12/04 09:32:14 by mshehata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	buffer;
	char	*line;
	int		n;
	int		i;

	i = 0;
	n = read(fd, &buffer, 1);
	line = malloc(sizeof(char) * 999999);
	while (n > 0)
	{
		line[i++] = buffer;
		if (buffer == '\n')
			break ;
		n = read(fd, &buffer, 1);
	}
	line[i] = '\0';
	return (line);
}

int	main(void)
{
	int	fd;

	fd = open("sample.txt", O_RDONLY);
	printf("%d\n", fd);
	printf("%s\n", get_next_line(fd));
}

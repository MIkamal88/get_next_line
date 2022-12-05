/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshehata <mshehata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 09:31:56 by mshehata          #+#    #+#             */
/*   Updated: 2022/12/04 09:31:56 by mshehata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h> // to be removed
# include <fcntl.h>

// # ifndef BUFFER_SIZE
// #define BUFFER_SIZE 1000

size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s);
char	*get_next_line(int fd);

// #endif
#endif

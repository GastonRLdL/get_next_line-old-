/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groman-l <groman-l@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:52:50 by groman-l          #+#    #+#             */
/*   Updated: 2023/05/19 19:06:32 by groman-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 500
#endif
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/* utils */
char	*double_free(char **buff, char **buff_);
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);

/* main */
char *get_next_line(int fd);
#endif
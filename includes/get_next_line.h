/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 22:44:32 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/06/22 22:44:32 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>
// # include <stdio.h>

// # define BUFFER_SIZE 42

char	*get_next_line(int fd);
void	*ft_calloc(size_t nmemb, size_t size);
char	*append_n_str(char *old, char *read, size_t index_lf);
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t dsize);
ssize_t	ft_strchr_index(const char *s, int c);
char	*read_file(int fd);
char	*update_readed(int fd, char *old_readed);
char	*get_line(char *readed);
char	*trim_read(char *old_readed);

#endif
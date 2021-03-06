/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 14:07:46 by asfaihi           #+#    #+#             */
/*   Updated: 2021/06/14 16:19:15 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <fcntl.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);
int		get_next_line(int fd, char **line);
char	*ft_strjoin(const char *s1, char const *s2);
int		get_line(char **string, int n, char **line, int fd);
char	*ft_substr(char const *s, unsigned int start, size_t len);
#endif

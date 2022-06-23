/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulla <sabdulla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:18:48 by sabdulla          #+#    #+#             */
/*   Updated: 2022/06/07 09:18:48 by sabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

size_t	ft_strlen(char *s);
char	*ft_strchr(char *s, int d);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_write(char *str);
char	*ft_read(int fd, char *s);
char	*ft_copy(char *s);
char	*get_next_line(int fd);

#endif
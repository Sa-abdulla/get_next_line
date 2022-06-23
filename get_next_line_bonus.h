/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulla <sabdulla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:16:32 by sabdulla          #+#    #+#             */
/*   Updated: 2022/06/07 09:16:32 by sabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

size_t	ft_strlen(char *s);
char	*ft_strchr(char *s, int d);
char	*ft_strjoin(char *s1, char *s2);
char	*get_write(char *str);
char	*get_read(int fd, char *s);
char	*get_copy(char *s);
char	*get_next_line(int fd);

#endif
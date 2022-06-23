/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulla <sabdulla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 00:34:46 by sabdulla          #+#    #+#             */
/*   Updated: 2022/06/21 12:17:42 by sabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *s, int d)
{
	int		i;
	char	a;

	i = 0;
	a = (char)d;
	if (!s || d == '\0')
		return (NULL);
	while (s[i] != a && s[i] != '\0')
		i++;
	if (s[i] == a)
		return ((s + i));
	return (NULL);
}

size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	str = malloc(((ft_strlen (s1) + ft_strlen (s2)) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (s1)
	{
		while (s1[i] != '\0')
		{
			str[i] = s1[i];
			i++;
		}
	}
	while (s2[j] != '\0')
		str[i++] = s2[j++];
	free (s1);
	str[i] = '\0';
	return (str);
}

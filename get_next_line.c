/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:42:52 by mouizar           #+#    #+#             */
/*   Updated: 2022/03/03 15:51:27 by mouizar          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t dstsize)
{
	size_t	i;
	size_t	lendst;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	lendst = ft_strlen(dst);
	if (dstsize < lendst)
		return (dstsize + ft_strlen(src));
	while (src[i] && ((lendst + i) + 1) < dstsize)
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lendst + ft_strlen(src));
}

char	*get_next_line(int fd)
{
	static char	*static_str;
	char		*buff;
	char		*return_line;
	int			nb;
	char		*tmp;
	int			index;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	nb = 1;
	buff = malloc (sizeof(char) * BUFFER_SIZE + 1);
	while (ft_strchr(static_str, '\n') == -1 && nb > 0)
	{
		nb = read (fd, buff, BUFFER_SIZE);
		if (nb == -1)
		{
			free(buff);
			return (NULL);
		}
		else
			buff[nb] = '\0';
		tmp = static_str;
		static_str = ft_strjoin(static_str, buff);
		free(tmp);
	}
	free(buff);
	index = 0;
	while (static_str[index] != '\0' && static_str[index] != '\n')
		index++;
	return_line = ft_substr(static_str, 0, index + 1);
	tmp = static_str;
	static_str = ft_substr(static_str, index + 1, ft_strlen(static_str));
	free(tmp);
	if (return_line[0] == '\0')
	{
		free(return_line);
		free(static_str);
		return (NULL);
	}
	return (return_line);
}

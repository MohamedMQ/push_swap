/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:37:14 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:37:15 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

char	*clean_data(char *data)
{
	size_t	i;
	char	*rest;

	i = 0;
	while (data[i] != '\n' && data[i] != '\0')
		i++;
	if (data[i] == '\n' && data[i + 1] != '\0')
	{
		i++;
		rest = ft_substr(data, i, (ft_strlen(data) - i));
	}
	else
		rest = NULL;
	free (data);
	if (!rest)
		return (NULL);
	return (rest);
}

char	*take_line(char *data)
{
	size_t	i;
	char	*line;

	i = 0;
	if (!data[0])
		return (NULL);
	while (data[i] != '\n' && data[i] != '\0')
		i++;
	if (data[i] == '\n')
		line = ft_substr(data, 0, i + 1);
	else
		line = ft_substr(data, 0, i);
	return (line);
}

char	*fd_read(int fd, char *data)
{
	char	*str;
	int		num_bites;

	str = malloc_null(BUFFER_SIZE);
	if (str == NULL)
		return (NULL);
	num_bites = 1;
	while (num_bites > 0 && !ft_strchr(str, '\n'))
	{
		num_bites = read(fd, str, BUFFER_SIZE);
		if (num_bites > 0)
		{
			str[num_bites] = '\0';
			data = ft_strjoin_line(data, str);
		}
	}
	free(str);
	if (num_bites == -1)
	{
		free(data);
		return (NULL);
	}
	return (data);
}

char	*get_next_line(int fd)
{
	static char	*data[200];
	char		*line;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	if (!data[fd] || (data[fd] && !(ft_strchr(data[fd], '\n'))))
		data[fd] = fd_read(fd, data[fd]);
	if (!data[fd])
		return (NULL);
	line = take_line(data[fd]);
	if (!line)
	{
		free(data[fd]);
		return (NULL);
	}
	data[fd] = clean_data(data[fd]);
	return (line);
}

char	*malloc_null(int i)
{
	char	*mall;

	mall = (char *)malloc(sizeof(char) * (i + 1));
	if (!mall)
		return (NULL);
	mall[0] = '\0';
	return (mall);
}

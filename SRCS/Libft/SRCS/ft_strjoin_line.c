/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_line.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:35:32 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:35:33 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_line(char *s1, char *s2)
{
	char	*mall;
	size_t	i;
	size_t	size_s1;
	size_t	size_s2;

	i = 0;
	if (!s1)
	{
		s1 = malloc_null(0);
		if (!s1)
			return (NULL);
	}
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	mall = malloc_null(size_s1 + size_s2 + 1);
	if (!mall)
		return (NULL);
	while (i++ < size_s1)
		mall[i - 1] = s1[i - 1];
	i = 0;
	while (i++ < size_s2)
		mall[size_s1 + i - 1] = s2[i - 1];
	mall[size_s1 + i - 1] = '\0';
	free(s1);
	return (mall);
}

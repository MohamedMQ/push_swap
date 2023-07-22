/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:35:23 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:35:24 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		len;
	char		*mall;
	size_t		i;

	i = 0;
	len = ft_strlen(s1);
	mall = (char *)malloc(len + 1);
	if (mall != NULL)
	{
		while (i < len)
		{
			mall[i] = s1[i];
			i++;
		}
		mall[i] = '\0';
		return (mall);
	}
	return (NULL);
}

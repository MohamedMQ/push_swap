/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:36:21 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:36:22 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*mall;
	size_t	count;
	size_t	len_src;

	if (!s)
		return (NULL);
	len_src = ft_strlen(s);
	if (len_src < start)
		start = len_src;
	if (len_src - start < len)
		len = len_src - start;
	mall = (char *)malloc_null(sizeof(char) * len);
	if (!mall)
		return (NULL);
	count = 0;
	while (start + count < len_src && count < len)
	{
		mall[count] = s[start + count];
		count++;
	}
	mall[count] = '\0';
	return (mall);
}

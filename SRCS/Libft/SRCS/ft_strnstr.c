/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:36:06 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:36:08 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		j;
	size_t	ln;

	if (needle[0] == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && len > 0)
	{
		j = 0;
		ln = len + 1;
		while (haystack[j] == needle[j] && needle[j] != '\0'
			&& --ln > 0)
				j++;
		if (needle[j] == '\0')
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

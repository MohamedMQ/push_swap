/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:34:46 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:34:48 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	int		i;

	d = (char *)dst;
	s = (char *)src;
	if (!dst && !src)
		return (0);
	if (d < s)
	{
		i = -1;
		while (++i < ((int)len))
			d[i] = s[i];
	}
	else
	{
		i = ((int)len - 1);
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}		
	}
	return (dst);
}

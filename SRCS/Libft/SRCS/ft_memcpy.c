/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:34:42 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:34:44 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{	
	char		*i;
	char		*a;
	size_t		z;

	i = (char *)dst;
	a = (char *)src;
	z = 0;
	if (dst == 0 && src == 0)
		return (NULL);
	while (z < n)
	{
		i[z] = a[z];
		z++;
	}	
	return (dst);
}

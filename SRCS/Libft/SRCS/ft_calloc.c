/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:33:44 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:33:45 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*mall;
	size_t	i;

	i = count * size;
	mall = (char *)malloc(i);
	if (mall != NULL)
	{
		ft_bzero(mall, i);
		return (mall);
	}
	return (NULL);
}

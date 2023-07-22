/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:35:56 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:35:57 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mall;
	size_t	i;

	i = 0;
	mall = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (mall == 0)
		return (NULL);
	while (i < ft_strlen(s))
	{
		mall[i] = f(i, s[i]);
		i++;
	}
	mall[i] = '\0';
	return (mall);
}

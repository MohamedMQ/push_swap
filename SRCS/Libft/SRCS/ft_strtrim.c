/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:36:16 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:36:17 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*mall;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1 && !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > 0 && ft_strchr(set, s1[end]))
		end--;
	mall = ft_substr(s1, start, end - start + 1);
	if (!mall)
		return (NULL);
	return (mall);
}

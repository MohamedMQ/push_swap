/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:36:26 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:36:27 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	a;

	if (c < 0)
		return (-1);
	a = (unsigned char)c;
	if (a >= 'A' && a <= 'Z')
		a = a + 32;
	return ((int)a);
}

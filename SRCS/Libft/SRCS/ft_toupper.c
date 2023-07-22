/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:36:45 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:37:07 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	a;

	if (c < 0)
		return (-1);
	a = (unsigned char)c;
	if (a >= 'a' && a <= 'z')
	{
		a = a - 32;
	}
	return ((int)c);
}

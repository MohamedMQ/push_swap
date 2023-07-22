/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:33:30 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:33:35 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (*(str + i) == ' ' || *(str + i) == '\n' || *(str + i) == '\t'
		|| *(str + i) == '\r' || *(str + i) == '\v' || *(str + i) == '\f')
		i++;
	if (*(str + i) == '+' || *(str + i) == '-')
	{
		if (*(str + i) == '-')
			sign = -1;
		i++;
	}	
	while ((*(str + i) >= '0' && *(str + i) <= '9'))
	{
		res = (res * 10) + (*(str + i) - '0');
		i++;
	}
	return (res * sign);
}

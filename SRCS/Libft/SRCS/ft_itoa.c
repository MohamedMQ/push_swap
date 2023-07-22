/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:34:28 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:34:30 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_len(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static int	potencia(int n)
{
	int	potencia;

	potencia = 1;
	while (--n)
		potencia = potencia * 10;
	return (potencia);
}

static char	*full_mall(char *mall, int n, int ten, int len)
{
	int	i;

	i = 0;
	if (n_len(n) < len)
	{
		mall[0] = '-';
		i++;
	}
	while (i < len)
	{	
		mall[i] = (n / ten) + '0';
		n = n % ten;
		ten /= 10;
		i++;
	}
	mall[i] = '\0';
	return (mall);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*mall;
	int		ten;
	int		i;

	i = 0;
	ten = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	len = n_len(n);
	ten = potencia(len);
	if (i == 0)
		mall = (char *)malloc(sizeof(char) * (len + 1));
	else
		mall = (char *)malloc(sizeof(char) * (++len + 1));
	if (mall == 0)
		return (NULL);
	return (full_mall(mall, n, ten, len));
}

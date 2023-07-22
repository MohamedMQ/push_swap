/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:38:46 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:52:55 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/push_swap.h"

long int	ft_atol(char *str, int number, int i)
{
	long int	res;
	long int	sign;

	res = 0;
	sign = 1;
	if (*(str + i) == '+' || (*(str + i) >= 9 && *(str + i) <= 13))
		print_error();
	if (*(str + i) == '-')
	{
		sign = -1;
		i++;
	}
	while ((*(str + i) >= '0' && *(str + i) <= '9'))
	{
		res = (res * 10) + (*(str + i) - '0');
		i++;
		number++;
	}
	if ((*(str + i) && (*(str + i) < '0' || *(str + i) > '9'))
		|| number == 0)
		print_error();
	return (res * sign);
}

void	check_int(char *av)
{
	long int	num;
	int			i;
	int			number;

	i = 0;
	num = 0;
	number = 0;
	num = ft_atol(av, number, i);
	if (num > 2147483647 || num < -2147483648)
		print_error();
}

void	check_errors_1(char **argv)
{
	int		i_ndex;
	int		j_ndex;
	int		av_len;
	char	**av;	

	i_ndex = 1;
	av_len = 0;
	while (argv[i_ndex])
	{
		j_ndex = 0;
		av = ft_split(argv[i_ndex], ' ');
		while (av[j_ndex])
		{
			check_int(av[j_ndex]);
			j_ndex++;
		}
		if (av[0])
			av_len = 1;
		ft_free(av);
		i_ndex++;
	}
	if (!av_len)
		exit(-1);
}

void	ft_free(char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		free(av[i]);
		i++;
	}
	free(av);
	av = NULL;
}

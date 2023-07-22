/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:37:27 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:37:28 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*my;

	if (!lst)
		return ;
	if (*lst != NULL)
	{
		my = *lst;
		while (my->next != NULL)
			my = my->next;
		my->next = new;
	}
	else
		*lst = new;
}

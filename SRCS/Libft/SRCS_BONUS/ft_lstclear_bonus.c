/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:37:35 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:37:37 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*my;
	t_list	*m;

	if (!lst)
		return ;
	if (*lst != NULL)
	{	
		my = *lst;
		while (my != NULL)
		{
			del(my->content);
			m = my->next;
			free(my);
			my = m;
		}
		*lst = NULL;
	}
}

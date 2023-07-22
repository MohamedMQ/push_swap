/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:37:56 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:37:58 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{	
	t_list	*str;

	str = (t_list *)malloc(sizeof(t_list) * 1);
	if (!str)
		return (NULL);
	str->content = content;
	str->next = NULL;
	return (str);
}

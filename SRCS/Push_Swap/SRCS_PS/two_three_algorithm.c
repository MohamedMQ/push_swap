/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_three_algorithm.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:39:32 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:39:33 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/push_swap.h"

void	two_numbers(t_stack *a)
{
	sa_action(a);
}

void	three_numbers(t_stack *a)
{
	if (a->top_element->index == 0)
	{
		rra_action(a);
		sa_action(a);
	}
	else if (a->top_element->index == 1 && a->bottom_element->index == 0)
		rra_action(a);
	else if (a->top_element->index == 1 && a->bottom_element->index == 2)
		sa_action(a);
	else if (a->top_element->index == 2 && a->bottom_element->index == 0)
	{
		ra_action(a);
		sa_action(a);
	}
	else if (a->top_element->index == 2 && a->bottom_element->index == 1)
		ra_action(a);
}

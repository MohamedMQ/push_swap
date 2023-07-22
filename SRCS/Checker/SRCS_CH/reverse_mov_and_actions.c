/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_mov_and_actions.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:31:11 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:31:12 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/checker.h"

void	ch_rra_action(t_stack *a)
{
	if (a->length > 1)
		mov_rra_rrb_rrr(a);
	return ;
}

void	ch_rrb_action(t_stack *b)
{
	if (b->length > 1)
		mov_rra_rrb_rrr(b);
	return ;
}

void	ch_rrr_action(t_stack *a, t_stack *b)
{
	if (a->length > 1 || b->length > 1)
	{
		mov_rra_rrb_rrr(a);
		mov_rra_rrb_rrr(b);
	}
	return ;
}

void	mov_rra_rrb_rrr(t_stack *stack)
{
	t_element	*tmp;

	if (stack->length < 2)
		return ;
	tmp = stack->bottom_element;
	stack->bottom_element = tmp->prev;
	stack->bottom_element->next = NULL;
	tmp->next = stack->top_element;
	tmp->prev = NULL;
	stack->top_element->prev = tmp;
	stack->top_element = tmp;
}

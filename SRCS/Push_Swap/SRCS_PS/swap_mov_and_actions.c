/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_mov_and_actions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:39:28 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:39:29 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/push_swap.h"

void	sa_action(t_stack *a)
{
	if (a->length > 1)
	{
		write(1, "sa\n", 3);
		mov_sa_sb_ss(a);
	}
}

void	sb_action(t_stack *b)
{
	if (b->length > 1)
	{
		write(1, "sb\n", 3);
		mov_sa_sb_ss(b);
	}
}

void	ss_action(t_stack *a, t_stack *b)
{
	if (a->length > 1 || b->length > 1)
	{
		mov_sa_sb_ss(a);
		mov_sa_sb_ss(b);
		write(1, "ss\n", 3);
	}
}

void	mov_sa_sb_ss(t_stack *stack)
{
	t_element	*tmp;

	if (stack->length > 1)
	{
		tmp = stack->top_element->next;
		if (stack->length == 2)
		{
			tmp->next = stack->top_element;
			tmp->prev = NULL;
			stack->top_element->prev = tmp;
			stack->top_element->next = NULL;
			stack->top_element = tmp;
			stack->bottom_element = tmp->next;
		}
		if (stack->length > 2)
		{
			stack->top_element->next->next->prev = stack->top_element;
			stack->top_element->next = stack->top_element->next->next;
			tmp->next = stack->top_element;
			tmp->prev = NULL;
			stack->top_element->prev = tmp;
			stack->top_element = tmp;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_mov_and_actions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:39:11 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:39:12 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/push_swap.h"

void	pa_action(t_stack *a, t_stack *b)
{
	if (b->length == 0)
		return ;
	mov_pa_pb(b, a);
	write(1, "pa\n", 3);
}

void	pb_action(t_stack *a, t_stack *b)
{
	if (a->length == 0)
		return ;
	mov_pa_pb(a, b);
	write(1, "pb\n", 3);
}

static void	mov_in_stack_to(t_stack *to, t_element *tmp)
{
	if (to->length < 1)
	{
		to->top_element = tmp;
		to->bottom_element = tmp;
		tmp->next = NULL;
	}
	else
	{
		tmp->next = to->top_element;
		to->top_element->prev = tmp;
		to->top_element = tmp;
	}
}

void	mov_pa_pb(t_stack *from, t_stack *to)
{
	t_element	*tmp;

	tmp = from->top_element;
	if (from->length > 1)
	{
		from->top_element = tmp->next;
		from->top_element->prev = NULL;
	}
	else
	{
		from->bottom_element = NULL;
		from->top_element = NULL;
	}
	mov_in_stack_to(to, tmp);
	--from->length;
	++to->length;
}

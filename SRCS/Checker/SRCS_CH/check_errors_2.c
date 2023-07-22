/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:30:46 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:30:46 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/checker.h"

void	duplicated_num(t_stack *a)
{
	t_element	*tmp1;
	t_element	*tmp2;
	int			num1;
	int			num2;

	tmp1 = a->top_element;
	while (tmp1->next)
	{
		num1 = tmp1->value;
		tmp2 = tmp1->next;
		while (tmp2)
		{
			num2 = tmp2->value;
			if (num1 == num2)
			{
				free_all(a);
				print_error();
			}
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
}

void	check_errors_2(t_stack *a)
{
	duplicated_num(a);
}

void	assign_index(t_stack *stack)
{
	t_element	*tmp;
	t_element	*current;
	int			count;
	int			index;

	count = 0;
	current = stack->top_element;
	while (count < stack->length)
	{
		index = 0;
		tmp = stack->top_element;
		while (tmp != NULL)
		{
			if (current->value > tmp->value)
				index++;
			tmp = tmp->next;
		}
		current->index = index;
		current = current->next;
		count++;
	}
}

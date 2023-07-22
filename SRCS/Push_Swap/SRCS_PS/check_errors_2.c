/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:38:50 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:38:50 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/push_swap.h"

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

int	in_order(t_stack *a)
{
	t_element	*tmp;
	int			num1;
	int			num2;
	int			check;

	check = 0;
	tmp = a->top_element;
	while (tmp->next)
	{
		num1 = tmp->value;
		num2 = tmp->next->value;
		if (num1 > num2)
		{
			check++;
			break ;
		}
		tmp = tmp->next;
	}
	return (check);
}

void	check_errors_2(t_stack *a)
{
	if (a->length == 1)
	{
		free_all(a);
		exit(0);
	}
	duplicated_num(a);
	if (in_order(a) == 0)
	{
		free_all(a);
		exit (0);
	}
}

void	assign_index(t_stack *a)
{
	t_element	*tmp;
	t_element	*current;
	int			count;
	int			index;

	count = 0;
	current = a->top_element;
	while (count < a->length)
	{
		index = 0;
		tmp = a->top_element;
		while (tmp != NULL)
		{
			if (tmp->value < current->value)
				index++;
			tmp = tmp->next;
		}
		current->index = index;
		current = current->next;
		count++;
	}
}

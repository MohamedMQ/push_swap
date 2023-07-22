/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:39:02 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:42:27 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/push_swap.h"

static void	init_element(t_stack *a, t_element *o, char **av, int j_index)
{
	if (!o)
	{
		write(1, "memory for some elements is not allocated\n", 42);
		ft_free(av);
		free_all(a);
		exit (1);
	}
	o->value = ft_atoi(av[j_index]);
	o->next = NULL;
	o->prev = NULL;
}

static void	create_stack(t_stack *a, t_element *new_element)
{
	t_element	*tmp;

	if (!a->top_element)
	{
		a->length++;
		a->top_element = new_element;
		a->bottom_element = new_element;
	}
	else
	{
		a->length++;
		tmp = a->bottom_element;
		a->bottom_element = new_element;
		tmp->next = a->bottom_element;
		a->bottom_element->prev = tmp;
	}
}

void	init_stack_a(t_stack *a, char **argv, int i_ndex)
{
	t_element	*new_element;
	char		**av;
	int			j_ndex;

	init_stack_b(a);
	new_element = NULL;
	while (argv[++i_ndex])
	{
		j_ndex = 0;
		av = ft_split(argv[i_ndex], ' ');
		if (!av[0])
		{
			free(av[0]);
			continue ;
		}
		while (av[j_ndex])
		{
			new_element = malloc(sizeof(t_element));
			init_element(a, new_element, av, j_ndex);
			create_stack(a, new_element);
			j_ndex++;
		}
		ft_free(av);
	}
}

void	init_stack_b(t_stack *b)
{
	b->length = 0;
	b->top_element = NULL;
	b->bottom_element = NULL;
}

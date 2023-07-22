/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:29:36 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:29:37 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "../SRCS/Libft/INC/libft.h"

//MACROS

# define NUM_NOT_FOUND 0
# define ROTATE_NORM 1
# define ROTATE_REV 2
# define NUM_IN_TOP 3

typedef struct s_element
{
	int					value;
	int					index;
	struct s_element	*prev;
	struct s_element	*next;

}	t_element;

typedef struct s_stack
{
	int			length;
	t_element	*top_element;
	t_element	*bottom_element;

}	t_stack;

//main

void		resolve(t_stack *a, t_stack *b);
void		print_error(void);
int			stack_in_order(t_stack *a);
void		free_all(t_stack *a);

//initializer

void		init_stack_a(t_stack *a, char **argv, int i_ndex);
void		init_stack_b(t_stack *b);

//check_errors_1

long int	ft_atol(char *str, int number, int i);
void		check_int(char *av);
void		check_errors_1(char **argv);
void		ft_free(char **av);

//check_errors_2

void		duplicated_num(t_stack *a);
int			in_order(t_stack *a);
void		check_errors_2(t_stack *a);
void		assign_index(t_stack *a);

//swap_mov_and_actions

void		mov_sa_sb_ss(t_stack *stack);
void		sa_action(t_stack *a);
void		sb_action(t_stack *b);
void		ss_action(t_stack *a, t_stack *b);

//push_mov_and_actions

void		mov_pa_pb(t_stack *from, t_stack *to);
void		pa_action(t_stack *a, t_stack *b);
void		pb_action(t_stack *a, t_stack *b);

//rotate_mov_and_actions

void		mov_ra_rb_rr(t_stack *stack);
void		ra_action(t_stack *a);
void		rb_action(t_stack *b);
void		rr_action(t_stack *a, t_stack *b);

//reverse_mov_and_actions

void		mov_rra_rrb_rrr(t_stack *stack);
void		rra_action(t_stack *a);
void		rrb_action(t_stack *b);
void		rrr_action(t_stack *a, t_stack *b);

//two_three_algorith

void		two_numbers(t_stack *a);
void		three_numbers(t_stack *a);

//four_five_algorithm

void		four_numbers(t_stack *a, t_stack *b);
void		five_numbers(t_stack *a, t_stack *b);

//from_six_algorith

void		from_six_numbers(t_stack *a, t_stack *b, int n_chunks, int cnt);
void		order_stack_b(t_stack *a, t_stack *b, int cut);
void		return_to_stack_a(t_stack *a, t_stack *b);
int			max_index_b(t_stack *b);
void		check_order_stack_a(t_stack *a);

//smart_rotate

int			smart_rotate_direct(int num, t_stack *stack, int *mov, int num_pos);
void		put_num_in_top_a(int num, t_stack *a);
void		put_num_in_top_b(int num, t_stack *a, t_stack *b);
void		rotate_norm_b(t_stack *a, t_stack *b, int num, int mov);
void		rotate_rev_b(t_stack *a, t_stack *b, int num, int mov);

#endif

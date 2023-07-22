/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:27:15 by mmaqbour          #+#    #+#             */
/*   Updated: 2023/05/20 12:29:23 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "push_swap.h"
# include "../SRCS/Libft/INC/get_next_line.h"

//main

int			main(int argc, char **argv);
void		reader(t_stack *a, t_stack *b, int *no_move);
void		print_error(void);
void		incorrect(t_stack *a, t_stack *b);
void		free_all(t_stack *stack);

//check_errors_1

long int	ft_atol(char *str, int number, int i);
void		check_int(char *av);
void		check_errors_1_1(char **argv, int av_len);
void		ft_free(char **av);

//check_errors_2

void		duplicated_num(t_stack *a);
void		check_errors_2(t_stack *a);
void		assign_index(t_stack *stack);

//initializer

void		init_stack_a(t_stack *a, char **argv, int i_ndex);
void		init_stack_b(t_stack *b);

//instructions_reader

void		read_instructions(char *line, t_stack *a, t_stack *b, int *no_move);
void		is_ordered(t_stack *a, t_stack *b);

//swap_mov_and_actions

void		mov_sa_sb_ss(t_stack *stack);
void		ch_sa_action(t_stack *a);
void		ch_sb_action(t_stack *b);
void		ch_ss_action(t_stack *a, t_stack *b);

//push_mov_and_actions

void		mov_pa_pb(t_stack *from, t_stack *to);
void		ch_pa_action(t_stack *a, t_stack *b);
void		ch_pb_action(t_stack *a, t_stack *b);

//rotate_mov_and_actions

void		mov_ra_rb_rr(t_stack *stack);
void		ch_ra_action(t_stack *a);
void		ch_rb_action(t_stack *b);
void		ch_rr_action(t_stack *a, t_stack *b);

//reverse_mov_and_actions

void		mov_rra_rrb_rrr(t_stack *stack);
void		ch_rra_action(t_stack *a);
void		ch_rrb_action(t_stack *b);
void		ch_rrr_action(t_stack *a, t_stack *b);

#endif

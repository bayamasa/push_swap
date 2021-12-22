/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:40:49 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/22 13:57:12 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include "ft_lst/ft_lst.h"
# include "lib/ft_printf/ft_printf.h"
#define MYDEBUG() printf("\x1b[46m%s[%d] %s\x1b[49m\n", __FILE__, __LINE__, __func__);
# define ERROR "Error\n"
# define SA "sa\n"
# define SB "sb\n"
# define SS "ss\n"
# define PA "pa\n"
# define PB "pb\n"
# define RA "ra\n"
# define RB "rb\n"
# define RR "rr\n"
# define RRA "rra\n"
# define RRB "rrb\n"
# define RRR "rrr\n"

void	process_one(void);
void	process_two(t_lst **stack);
void	process_three(t_lst **stack);
void	process_less_than_seven(t_lst **a_stack);
void	process_greater_equal_seven(t_lst **a_stack);

void	free_all(t_lst **stack);
void	abort_push_swap(void *heap);
int		min(t_lst *stack);
void	pa(t_lst **a, t_lst **b);
void	pb(t_lst **a, t_lst **b);
int		push(t_lst **a, t_lst **b);
void	sa(t_lst **a);
void	sb(t_lst **b);
void	ss(t_lst **a, t_lst **b);
int		swap(t_lst **a);
int		rotate(t_lst *tg);
void	ra(t_lst **a);
void	rb(t_lst **b);
int		reverse_rotate(t_lst **a);
void	rra(t_lst **a);
void	rrb(t_lst **b);
void	rrr(t_lst **a, t_lst **b);

int		push_min(t_lst **from, t_lst **to);
void	print_all(t_lst **stack);
int		push_min(t_lst **from, t_lst **to);
int		bubble_sort(int *stack, int size);
int		median(t_lst *a_stack);
int		process_algo(t_lst **stack);

int		b_to_a(t_lst **a_stack, t_lst **b_stack);
int		is_sorted(t_lst *a_stack);
int		is_sorted_except_top(t_lst *a_stack);
int		sort_top(t_lst **a_stack, int left);

#endif

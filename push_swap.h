/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:40:49 by mhirabay          #+#    #+#             */
/*   Updated: 2022/01/21 21:04:34 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include "lib/ft_lst/ft_lst.h"
# include "lib/ft_printf/ft_printf.h"
# include "lib/libft/libft.h"
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

void	sort_one(void);
void	sort_two(t_lst **stack);
void	sort_three(t_lst **stack);
void	sort_less_than_seven(t_lst **a_stack);
void	sort_greater_equal_seven(t_lst **a_stack);

void	free_all(t_lst **stack);
void	abort_ps_free_stack(int *value, t_lst **stack);
void	abort_ps_free_all(int *value, t_lst **stack);
void	abort_push_swap(void *heap);
int		min(t_lst *stack);
int		pa(t_lst **a, t_lst **b);
int		pb(t_lst **a, t_lst **b);
int		push(t_lst **a, t_lst **b);
void	sa(t_lst **a);
void	sb(t_lst **b);
void	ss(t_lst **a, t_lst **b);
int		swap(t_lst **a);
int		rotate(t_lst *tg);
int		ra(t_lst **a);
void	rb(t_lst **b);
void	rr(t_lst **a, t_lst **b);
int		reverse_rotate(t_lst **a);
void	rra(t_lst **a);
void	rrb(t_lst **b);
void	rrr(t_lst **a, t_lst **b);
void	sort_ra(t_lst **a_stack, int times);

int		push_min(t_lst **from, t_lst **to);
void	print_all(t_lst **stack);
int		push_min(t_lst **from, t_lst **to);
int		bubble_sort(int *stack, int size);
int		median(t_lst *a_stack);
int		median_by_last_num(t_lst *a_stack, int last_num);
int		last_unsorted(t_lst *a_stack, int pb_count);
int		min_num(t_lst *stack);
void	push_back(t_lst **a_stack, t_lst **b_stack, int pa_count);

int		process_algo(t_lst **stack);
int		a_to_b(t_lst **a_stack, t_lst **b_stack, int pb_count, int first);
int		b_to_a(t_lst **a_stack, t_lst **b_stack);
int		is_sorted(t_lst *a_stack);
int		is_sorted_except_top(t_lst *a_stack);
int		sort_last_a(t_lst **a_stack, t_lst **b_stack, int left);
int		get_index_from_bubble_sort(t_lst *b_stack, \
		int *stack, int get_i, int size);

void	case_zero_a(t_lst **a_stack);
void	case_one_a(t_lst **a_stack);
void	case_two_a(t_lst **a_stack, t_lst **b_stack);
void	case_three_a(t_lst **a_stack, t_lst **b_stack);
void	case_four_a(t_lst **a_stack);

int		check_case_a(int f, int s, int t);
int		check_case_for_b(int f, int s, int t);

void	case_zero_b(t_lst **a_stack, t_lst **b_stack);
void	case_three_b(t_lst **a_stack, t_lst **b_stack);
void	case_four_b(t_lst **a_stack, t_lst **b_stack);
void	case_five_b(t_lst **a_stack, t_lst **b_stack);

int		push_sorted_b(t_lst **a_stack, t_lst **b_stack);
int		sort_b(t_lst **a_stack, t_lst **b_stack);
void	sort_three_b(t_lst **a_stack, t_lst **b_stack);
void	sort_four_b(t_lst **a_stack, t_lst **b_stack);
void	sort_five_b(t_lst **a_stack, t_lst **b_stack);
void	sort_six_b(t_lst **a_stack, t_lst **b_stack);
void	sort_seven_b(t_lst **a_stack, t_lst **b_stack);

void	case_one_b(t_lst **a_stack, t_lst **b_stack);
void	case_two_b(t_lst **a_stack, t_lst **b_stack);
void	case_three_b(t_lst **a_stack, t_lst **b_stack);
void	case_four_b(t_lst **a_stack, t_lst **b_stack);
void	case_five_b(t_lst **a_stack, t_lst **b_stack);

void	case_one_moved(t_lst **a_stack);
void	case_two_moved(t_lst **a_stack, t_lst **b_stack);
void	case_three_moved(t_lst **a_stack, t_lst **b_stack);
void	case_four_moved(t_lst **a_stack);
void	case_five_moved(t_lst **a_stack);

void	check_not_same_num(int size, int *value, t_lst **stack);
int		*check_num_validation(int size, char const *argv[], t_lst **stack);
int		is_no_more_than_pivot_after(int pivot, t_lst *b_stack);
int		is_no_less_than_pivot_after(int pivot, t_lst *a_stack);

void	sort_one_a(t_lst **a_stack);
void	sort_two_a(t_lst **a_stack);
void	sort_three_a(t_lst **a_stack, t_lst **b_stack);
void	sort_four_a(t_lst **a_stack, t_lst **b_stack);
void	sort_five_a(t_lst **a_stack, t_lst **b_stack);

#endif

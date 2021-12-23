/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_greater_equal_seven.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:08:01 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/23 16:18:54 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// pivotを求める → 理想は中央値であるが、めんどいので今回は最初の値にする。
// 

int	push_half_attr_to_a(t_lst **a_stack, t_lst **b_stack)
{
	int		pivot;
	int		last_num;

	b_stack = NULL;
	pivot = median(*b_stack);
	last_num = ft_lstlast(*b_stack)->num;
	while ((*b_stack)->num != last_num)
	{
		if (pivot > (*a_stack)->num)
			pa(a_stack, b_stack);
		else
			ra(a_stack);
	}
	return (true);
}

int	check_case_for_b(int f, int s, int t)
{
	if (f > s && s > t)
		return (0);
	else if (f > s && t > f && s < t)
		return (1);
	else if (f > s && f > t && s < t)
		return (2);
	else if (f < s && f < t && s > t)
		return (3);
	else if (f < s && f > t && s > t)
		return (4);
	else if (f < s && s < t)
		return (5);
	return (-1);
}

void	process_three_b(t_lst **b_stack)
{
	int	caze;

	caze = check_case_for_b((*b_stack)->num, (*b_stack)->next->num, \
		(*b_stack)->next->next->num);
	if (caze == 0)
		;
	else if (caze == 1)
		rrb(b_stack);
	else if (caze == 2)
	{
		sb(b_stack);
		rb(b_stack);
	}
	else if (caze == 3)
		rb(b_stack);
	else if (caze == 4)
		sb(b_stack);
	else if (caze == 5)
	{
		sb(b_stack);
		rrb(b_stack);
	}
	else
		abort_push_swap(b_stack);
}

void	process_two_b(t_lst **stack)
{
	if ((*stack)->num < (*stack)->next->num)
		sb(stack);
}

int	process_algo_b(t_lst **stack)
{
	int		size;

	size = ft_lstsize(*stack);
	if (size == 1)
		return (1);
	else if (size == 2)
		process_two_b(stack);
	else if (size == 3)
		process_three_b(stack);
	return (size);
}

int	push_sorted_b(t_lst **a_stack, t_lst **b_stack)
{
	int		i;
	int		size;

	i = 0;
	size = ft_lstsize(*b_stack);
	process_algo_b(b_stack);
	// paした後にrotateすると、逆になってしまう。
	// 独自のswapの式を使用する必要がある。
	while (i < size)
	{
		pa(a_stack, b_stack);
		i++;
	}
	i = 0;
	while (i < size)
	{
		ra(a_stack);
		i++;
	}
	return (true);
}

int	a_to_b(t_lst **a_stack, t_lst **b_stack, int pb_count, int first)
{
	int		a_size;
	int		i;
	int		pivot;
	int		last_num;
	int		flag;
	int		ra_count;

	i = 0;
	flag = false;
	a_size = ft_lstsize(*a_stack);
	if (is_sorted(*a_stack))
		return (true);
	if (a_size - pb_count <= 3)
		return (sort_top(a_stack, a_size - pb_count));
	last_num = last_unsorted(*a_stack, pb_count, &flag);
	pivot = median_by_last_num(*a_stack, last_num);
	ra_count = 0;
	// 全体からpb_countを引いたものをsortしていく
	while ((*a_stack)->num != last_num)
	{
		if (pivot > (*a_stack)->num)
		{
			pb(a_stack, b_stack);
			pb_count++;
		}
		else
		{
			ra(a_stack);
			ra_count++;
		}
	}
	if (first)
	{
		if (pivot > (*a_stack)->num)
		{
			pb(a_stack, b_stack);
			pb_count++;
		}
		else
		{
			ra(a_stack);
			ra_count++;
		}	
	}
	if (!first)
	{
		while (i < ra_count)
		{
			rra(a_stack);
			i++;
		}
	}
	// ワンプッシュが終わる
	b_to_a(a_stack, b_stack);
	a_to_b(a_stack, b_stack, pb_count, false);
	return (true);
}

void	push_back(t_lst **a_stack, t_lst **b_stack, int pa_count)
{
	int	i;

	i = 0;
	while (i < pa_count)
	{
		pb(a_stack, b_stack);
		i++;
	}
	b_to_a(a_stack, b_stack);
}

int	b_to_a(t_lst **a_stack, t_lst **b_stack)
{
	int		size;
	int		pivot;
	int		last_num;
	int		pa_count;

	pa_count = 0;
	size = ft_lstsize(*b_stack);
	if (size <= 3)
	{
		push_sorted_b(a_stack, b_stack);
		return (true);
	}
	// printf("a\n");
	// print_all(a_stack);
	// printf("b\n");
	// print_all(b_stack);
	pivot = median(*b_stack);
	last_num = ft_lstlast(*b_stack)->num;
	while ((*b_stack)->num != last_num)
	{
		if (pivot < (*b_stack)->num)
		{
			pa(a_stack, b_stack);
			pa_count++;
		}
		else
			rb(b_stack);
	}
	if (pivot < (*b_stack)->num)
	{
		pa(a_stack, b_stack);
		pa_count++;
	}
	else
		rb(b_stack);
	b_to_a(a_stack, b_stack);
	push_back(a_stack, b_stack, pa_count);
	return (true);
}

void	process_greater_equal_seven(t_lst **a_stack)
{
	t_lst	*b_stack;

	b_stack = NULL;

	a_to_b(a_stack, &b_stack, 0, true);
	// printf("a\n");
	// print_all(a_stack);
	// printf("b\n");
	// print_all(&b_stack);
}

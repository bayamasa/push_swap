/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_greater_equal_seven.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:08:01 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/22 13:57:00 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// pivotを求める → 理想は中央値であるが、めんどいので今回は最初の値にする。
// 

int	push_half_attr_to_a(t_lst **a_stack, t_lst **b_stack)
{
	int		pivot;
	int		last;

	b_stack = NULL;
	pivot = median(*b_stack);
	last = ft_lstlast(*b_stack)->num;
	while ((*b_stack)->num != last)
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
		rra(b_stack);
	else if (caze == 2)
	{
		sa(b_stack);
		ra(b_stack);
	}
	else if (caze == 3)
		ra(b_stack);
	else if (caze == 4)
		sa(b_stack);
	else if (caze == 5)
	{
		sa(b_stack);
		rra(b_stack);
	}
	else
		abort_push_swap(b_stack);
}

void	process_two_b(t_lst **stack)
{
	if ((*stack)->num > (*stack)->next->num)
		sa(stack);
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
	printf("size = %d\n", size);
	process_algo_b(b_stack);
	print_all(b_stack);
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

int	a_to_b(t_lst **a_stack, t_lst **b_stack, int pa_count)
{
	int		a_size;
	int		i;
	int		pivot;
	int		last;
	int		left;

	i = 0;
	a_size = ft_lstsize(*a_stack);
	if (is_sorted(*a_stack))
		return (true);
	left = is_sorted_except_top(*a_stack);
	if (left)
		return (sort_top(a_stack, left));
	if (pa_count == 0)
	{
		pivot = median(*a_stack);
		last = ft_lstlast(*a_stack)->num;
		while ((*a_stack)->num != last)
		{
			if (pivot > (*a_stack)->num)
				pb(a_stack, b_stack);
			else
				ra(a_stack);
		}
	}
	else
	{
		while (i < pa_count)
		{
			pb(a_stack, b_stack);
			i++;
		}
	}
	b_to_a(a_stack, b_stack);
	return (true);
}

int	b_to_a(t_lst **a_stack, t_lst **b_stack)
{
	int		size;
	int		pivot;
	int		last;
	int		pa_count;

	pa_count = 0;
	size = ft_lstsize(*b_stack);
	if (size <= 3)
	{
		push_sorted_b(a_stack, b_stack);
		return (true);
	}
	pivot = median(*b_stack);
	printf("pivot = %d\n", pivot);
	last = ft_lstlast(*b_stack)->num;
	while ((*b_stack)->num != last)
	{
		printf("(*b_stack)->num = %d\n", (*b_stack)->num);
		if (pivot < (*b_stack)->num)
		{
			pa(a_stack, b_stack);
			pa_count++;
		}
		else
			rb(b_stack);
	}
	b_to_a(a_stack, b_stack);
	a_to_b(a_stack, b_stack, pa_count);
	return (true);
}

void	process_greater_equal_seven(t_lst **a_stack)
{
	t_lst	*b_stack;

	b_stack = NULL;

	a_to_b(a_stack, &b_stack, 0);
}

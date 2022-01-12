/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_greater_equal_seven.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:08:01 by mhirabay          #+#    #+#             */
/*   Updated: 2022/01/12 14:40:45 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index_from_bubble_sort(t_lst *b_stack, int get_i, int size)
{
	int		i;
	int		j;
	int		stack[ARG_MAX];
	int		tmp;

	i = 0;
	while (i < size)
	{
		stack[i] = b_stack->num;
		b_stack = b_stack->next;
		i++;
	}
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (stack[j] > stack[j + 1])
			{
				tmp = stack[j];
				stack[j] = stack[j + 1];
				stack[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	return (stack[get_i]);
}

int	a_to_b(t_lst **a_stack, t_lst **b_stack, int pb_count, int first)
{
	int		i;
	int		pivot;
	int		last_num;
	int		ra_count;

	i = 0;
	if (is_sorted(*a_stack))
		return (true);
	if (ft_lstsize(*a_stack) - pb_count <= 6)
		return (sort_last_a(a_stack, b_stack, ft_lstsize(*a_stack) - pb_count));
	last_num = last_unsorted(*a_stack, pb_count);
	pivot = median_by_last_num(*a_stack, last_num);
	ra_count = 0;
	while ((*a_stack)->num != last_num)
	{
		if (is_no_less_than_pivot_after(pivot, *a_stack))
			break ;
		if (pivot > (*a_stack)->num)
			pb_count += pb(a_stack, b_stack);
		else
			ra_count += ra(a_stack);
	}
	if (first)
	{
		if (pivot > (*a_stack)->num)
			pb_count += pb(a_stack, b_stack);
		else
			ra_count += ra(a_stack);
	}
	else
		while (i++ < ra_count)
			rra(a_stack);
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
	int		pa_count;

	pa_count = 0;
	size = ft_lstsize(*b_stack);
	if (size <= 6)
		return (push_sorted_b(a_stack, b_stack));
	pivot = median(*b_stack);
	while ((*b_stack)->num != ft_lstlast(*b_stack)->num)
	{
		if (is_no_more_than_pivot_after(pivot, *b_stack))
			break ;
		if (pivot < (*b_stack)->num)
			pa_count += pa(a_stack, b_stack);
		else
			rb(b_stack);
	}
	if (pivot < (*b_stack)->num)
		pa_count += pa(a_stack, b_stack);
	else
		rb(b_stack);
	b_to_a(a_stack, b_stack);
	push_back(a_stack, b_stack, pa_count);
	return (true);
}

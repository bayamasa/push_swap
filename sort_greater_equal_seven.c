/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_greater_equal_seven.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:08:01 by mhirabay          #+#    #+#             */
/*   Updated: 2022/01/12 16:41:29 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index_from_bubble_sort(t_lst *b_stack, int *stack, int get_i, int size)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	while (i < size)
	{
		stack[i++] = b_stack->num;
		b_stack = b_stack->next;
	}
	while (i-- != 0)
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
	}
	return (stack[get_i]);
}

int	a_to_b_unfirst(t_lst **a_stack, int pb_count, int ra_count)
{
	int	i;

	i = 0;
	while (i++ < ra_count)
		rra(a_stack);
	return (pb_count);
}

int	a_to_b_utils(t_lst **a_stack, t_lst **b_stack, int pb_count, int first)
{
	int	last_num;
	int	pivot;
	int	ra_count;
	int	i;

	i = 0;
	ra_count = 0;
	last_num = last_unsorted(*a_stack, pb_count);
	pivot = median_by_last_num(*a_stack, last_num);
	while ((*a_stack)->num != last_num)
	{
		if (is_no_less_than_pivot_after(pivot, *a_stack))
			break ;
		if (pivot > (*a_stack)->num)
			pb_count += pb(a_stack, b_stack);
		else
			ra_count += ra(a_stack);
	}
	if (!first)
		return (a_to_b_unfirst(a_stack, pb_count, ra_count));
	if (pivot > (*a_stack)->num)
		pb_count += pb(a_stack, b_stack);
	else
		ra(a_stack);
	return (pb_count);
}

int	a_to_b(t_lst **a_stack, t_lst **b_stack, int pb_count, int first)
{
	int	size;

	size = ft_lstsize(*a_stack) - pb_count;
	if (is_sorted(*a_stack))
		return (true);
	if (size <= 5)
		return (sort_last_a(a_stack, b_stack, size));
	pb_count = a_to_b_utils(a_stack, b_stack, pb_count, first);
	b_to_a(a_stack, b_stack);
	a_to_b(a_stack, b_stack, pb_count, false);
	return (true);
}

int	b_to_a(t_lst **a_stack, t_lst **b_stack)
{
	int		size;
	int		pivot;
	int		pa_count;

	pa_count = 0;
	size = ft_lstsize(*b_stack);
	if (size <= 7)
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

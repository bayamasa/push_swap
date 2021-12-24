/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_utils_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 21:03:31 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/24 21:10:18 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_lst *a_stack)
{
	t_lst	*tmp;

	tmp = a_stack;
	while (tmp->next != NULL)
	{
		if (tmp->num > tmp->next->num)
			return (false);
		tmp = tmp->next;
	}
	return (true);
}

int	is_no_more_than_pivot_after(int pivot, t_lst *b_stack)
{
	while (b_stack != NULL)
	{
		if (pivot < b_stack->num)
			return (false);
		b_stack = b_stack->next;
	}
	return (true);
}

int	is_no_less_than_pivot_after(int pivot, t_lst *a_stack)
{
	while (a_stack != NULL)
	{
		if (pivot > a_stack->num)
			return (false);
		a_stack = a_stack->next;
	}
	return (true);
}

int	median_by_last_num(t_lst *a_stack, int last_num)
{
	int		stack[ARG_MAX];
	int		size;
	int		i;
	t_lst	*tmp;

	size = 1;
	tmp = a_stack;
	while (tmp->num != last_num)
	{
		tmp = tmp->next;
		size++;
	}
	i = 0;
	while (i < size)
	{
		stack[i] = (a_stack)->num;
		(a_stack) = (a_stack)->next;
		i++;
	}
	return (bubble_sort(stack, size));
}

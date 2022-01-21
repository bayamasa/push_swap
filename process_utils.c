/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:56:58 by mhirabay          #+#    #+#             */
/*   Updated: 2022/01/12 13:52:28 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted_except_top(t_lst *a_stack)
{
	int	min_index;
	int	i;

	i = 0;
	min_index = min(a_stack);
	while (i < min_index)
	{
		a_stack = a_stack->next;
		i++;
	}
	if (i > 3)
		return (false);
	while (a_stack->next != NULL)
	{
		if (a_stack->num > a_stack->next->num)
			return (false);
		a_stack = a_stack->next;
	}
	return (true);
}

int	push_min(t_lst **from, t_lst **to)
{
	int		ret;
	int		size;
	int		i_min;

	i_min = min(*from);
	size = ft_lstsize(*from);
	ret = min_num(*from);
	if (ret == -1)
		return (false);
	if (size / 2 > i_min)
		while ((*from)->num != ret)
			ra(from);
	else
		while ((*from)->num != ret)
			rra(from);
	pb(from, to);
	return (true);
}

void	print_all(t_lst **stack)
{
	t_lst	*tmp;
	int		i;

	i = 1;
	tmp = *stack;
	while (tmp != NULL)
	{
		printf("stack No.%d, is %d\n", i, (tmp)->num);
		tmp = tmp->next;
		i++;
	}
}

int	bubble_sort(int *stack, int size)
{
	int	i;
	int	j;
	int	tmp;

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
	return (stack[(size / 2)]);
}

int	last_unsorted(t_lst *a_stack, int pb_count)
{
	int	i;
	int	size;
	int	last;

	size = ft_lstsize(a_stack);
	if (pb_count == 0)
		return (ft_lstlast(a_stack)->num);
	last = size - pb_count;
	i = 0;
	while (i < last)
	{
		a_stack = a_stack->next;
		i++;
	}
	return (a_stack->num);
}

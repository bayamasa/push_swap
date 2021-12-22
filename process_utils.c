/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:56:58 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/22 14:11:17 by mhirabay         ###   ########.fr       */
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
	if (i > 4)
		return (false);
	while (a_stack->next != NULL)
	{
		if (a_stack->num > a_stack->next->num)
			return (false);
		a_stack = a_stack->next;
	}
	return (true);
}

\
int	push_min(t_lst **from, t_lst **to)
{
	int	i;
	int	i_min;

	i = 0;
	i_min = min(*from);
	if (i_min == -1)
		return (false);
	while (i < i_min)
	{
		ra(from);
		i++;
	}
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
	return (stack[size / 2]);
}

int	median(t_lst *a_stack)
{
	int		stack[ARG_MAX];
	int		size;
	int		i;

	i = 0;
	size = ft_lstsize(a_stack);
	while (i < size)
	{
		stack[i] = (a_stack)->num;
		(a_stack) = (a_stack)->next;
		i++;
	}
	return (bubble_sort(stack, size));
}

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

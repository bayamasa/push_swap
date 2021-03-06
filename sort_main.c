/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 16:56:20 by mhirabay          #+#    #+#             */
/*   Updated: 2022/01/12 16:06:28 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_case(int f, int s, int t)
{
	if (f < s && s < t)
		return (0);
	else if (f > s && t > f && s < t)
		return (1);
	else if (f > s && f > t && s > t)
		return (2);
	else if (f > s && f > t && s < t)
		return (3);
	else if (f < s && f < t && s > t)
		return (4);
	else if (f < s && f > t && s > t)
		return (5);
	return (-1);
}

void	sort_two(t_lst **stack)
{
	if ((*stack)->num > (*stack)->next->num)
		sa(stack);
}

void	sort_three(t_lst **stack)
{
	int	caze;

	caze = check_case((*stack)->num, (*stack)->next->num, \
		(*stack)->next->next->num);
	if (caze == 0)
		;
	else if (caze == 1)
		sa(stack);
	else if (caze == 2)
	{
		sa(stack);
		rra(stack);
	}
	else if (caze == 3)
		ra(stack);
	else if (caze == 4)
	{
		sa(stack);
		ra(stack);
	}
	else if (caze == 5)
		rra(stack);
	else
		abort_push_swap(stack);
}

void	sort_less_than_seven(t_lst **a_stack)
{
	int		i;
	int		size;
	int		status;
	t_lst	*b_stack;

	i = 0;
	b_stack = NULL;
	if (is_sorted(*a_stack))
		return ;
	size = ft_lstsize(*a_stack);
	while (i < size - 3)
	{
		status = push_min(a_stack, &b_stack);
		if (status == -1)
		{
			free_all(&b_stack);
			abort_push_swap(a_stack);
		}
		i++;
	}
	sort_three(a_stack);
	i = 0;
	while (i++ < size - 3)
		pa(a_stack, &b_stack);
}

void	sort_greater_equal_seven(t_lst **a_stack)
{
	t_lst	*b_stack;

	b_stack = NULL;
	a_to_b(a_stack, &b_stack, 0, true);
}

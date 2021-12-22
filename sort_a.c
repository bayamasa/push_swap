/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 10:38:19 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/22 13:48:59 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_case_a(int f, int s, int t)
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

void	process_one_a(t_lst **a_stack)
{
	ra(a_stack);
}

void	process_two_a(t_lst **a_stack)
{
	if ((*a_stack)->num > (*a_stack)->next->num)
	{
		sa(a_stack);
	}
	ra(a_stack);
	ra(a_stack);
}

void	process_three_a(t_lst **a_stack)
{
	int	caze;

	caze = check_case_a((*a_stack)->num, (*a_stack)->next->num, \
		(*a_stack)->next->next->num);
	if (caze == 0)
		;
	else if (caze == 1)
		sa(a_stack);
	else if (caze == 2)
	{
		sa(a_stack);
		ra(a_stack);
		sa(a_stack);
		rra(a_stack);
		sa(a_stack);
	}
	else if (caze == 3)
	{
		sa(a_stack);
		ra(a_stack);
		sa(a_stack);
		rra(a_stack);
	}
	else if (caze == 4)
	{
		ra(a_stack);
		sa(a_stack);
		rra(a_stack);
	}
	else if (caze == 5)
	{
		ra(a_stack);
		sa(a_stack);
		rra(a_stack);
		sa(a_stack);
	}
	else
		abort_push_swap(a_stack);
	ra(a_stack);
	ra(a_stack);
	ra(a_stack);
}

int	sort_top(t_lst **a_stack, int left)
{
	if (left == 1)
	{
		process_one_a(a_stack);
	}
	else if (left == 2)
	{
		process_two_a(a_stack);
	}
	else if (left == 3)
	{
		process_three_a(a_stack);
	}
	return (true);
}

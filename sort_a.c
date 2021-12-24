/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 10:38:19 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/24 20:33:48 by mhirabay         ###   ########.fr       */
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

void	process_three_a(t_lst **a_stack, t_lst **b_stack)
{
	int	caze;

	caze = check_case_a((*a_stack)->num, (*a_stack)->next->num, \
		(*a_stack)->next->next->num);
	if (caze == 0)
		case_zero(a_stack);
	else if (caze == 1)
		case_one(a_stack);
	else if (caze == 2)
		case_two(a_stack, b_stack);
	else if (caze == 3)
		case_three(a_stack, b_stack);
	else if (caze == 4)
		case_four(a_stack);
	else if (caze == 5)
	{
		pb(a_stack, b_stack);
		sa(a_stack);
		ra(a_stack);
		pa(a_stack, b_stack);
		ra(a_stack);
		ra(a_stack);
	}
	else
		abort_push_swap(a_stack);
}

int	sort_top(t_lst **a_stack, t_lst **b_stack, int left)
{
	if (left == 1)
		process_one_a(a_stack);
	else if (left == 2)
		process_two_a(a_stack);
	else if (left == 3)
		process_three_a(a_stack, b_stack);
	return (true);
}

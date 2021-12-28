/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:29:59 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/27 16:30:07 by mhirabay         ###   ########.fr       */
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

void	process_three(t_lst **stack)
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

void	process_three_a(t_lst **a_stack, t_lst **b_stack)
{
	int	caze;

	caze = check_case_a((*a_stack)->num, (*a_stack)->next->num, \
		(*a_stack)->next->next->num);
	if (caze == 0)
		case_zero_a(a_stack);
	else if (caze == 1)
		case_one_a(a_stack);
	else if (caze == 2)
		case_two_a(a_stack, b_stack);
	else if (caze == 3)
		case_three_a(a_stack, b_stack);
	else if (caze == 4)
		case_four_a(a_stack);
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

void	process_three_b(t_lst **a_stack, t_lst **b_stack)
{
	int	caze;

	caze = check_case_for_b((*b_stack)->num, (*b_stack)->next->num, \
		(*b_stack)->next->next->num);
	if (caze == 0)
		case_zero_b(a_stack, b_stack);
	else if (caze == 1)
		case_one_b(a_stack, b_stack);
	else if (caze == 2)
		case_two_b(a_stack, b_stack);
	else if (caze == 3)
		case_three_b(a_stack, b_stack);
	else if (caze == 4)
		case_four_b(a_stack, b_stack);
	else if (caze == 5)
		case_five_b(a_stack, b_stack);
	else
		abort_push_swap(b_stack);
}

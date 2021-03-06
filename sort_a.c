/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 10:38:19 by mhirabay          #+#    #+#             */
/*   Updated: 2022/01/12 07:38:22 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_one_a(t_lst **a_stack)
{
	ra(a_stack);
}

void	sort_two_a(t_lst **a_stack)
{
	if ((*a_stack)->num > (*a_stack)->next->num)
	{
		sa(a_stack);
	}
	ra(a_stack);
	ra(a_stack);
}

void	sort_three_a(t_lst **a_stack, t_lst **b_stack)
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

int	sort_last_a(t_lst **a_stack, t_lst **b_stack, int left)
{
	if (left == 1)
		sort_one_a(a_stack);
	else if (left == 2)
		sort_two_a(a_stack);
	else if (left == 3)
		sort_three_a(a_stack, b_stack);
	else if (left == 4)
		sort_four_a(a_stack, b_stack);
	else if (left == 5)
		sort_five_a(a_stack, b_stack);
	return (true);
}

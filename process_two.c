/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:41:11 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/24 23:37:27 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	process_two(t_lst **stack)
{
	if ((*stack)->num > (*stack)->next->num)
		sa(stack);
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

void	case_two_a(t_lst **a_stack, t_lst **b_stack)
{
	pb(a_stack, b_stack);
	sa(a_stack);
	ra(a_stack);
	ra(a_stack);
	pa(a_stack, b_stack);
	ra(a_stack);
}

void	process_two_b(t_lst **a_stack, t_lst **b_stack)
{
	if ((*b_stack)->num < (*b_stack)->next->num)
		sb(b_stack);
	pa(a_stack, b_stack);
	pa(a_stack, b_stack);
	ra(a_stack);
	ra(a_stack);
}

void	case_two_b(t_lst **a_stack, t_lst **b_stack)
{
	pa(a_stack, b_stack);
	pa(a_stack, b_stack);
	ra(a_stack);
	pa(a_stack, b_stack);
	ra(a_stack);
	ra(a_stack);
}

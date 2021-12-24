/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 20:41:08 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/24 20:50:01 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_one_b(t_lst **a_stack, t_lst **b_stack)
{
	pa(a_stack, b_stack);
	pa(a_stack, b_stack);
	ra(a_stack);
	ra(a_stack);
	pa(a_stack, b_stack);
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

void	case_three_b(t_lst **a_stack, t_lst **b_stack)
{
	pa(a_stack, b_stack);
	ra(a_stack);
	pa(a_stack, b_stack);
	pa(a_stack, b_stack);
	ra(a_stack);
	ra(a_stack);
}

void	case_four_b(t_lst **a_stack, t_lst **b_stack)
{
	rb(b_stack);
	pa(a_stack, b_stack);
	pa(a_stack, b_stack);
	ra(a_stack);
	pa(a_stack, b_stack);
	ra(a_stack);
	ra(a_stack);
}

void	case_five_b(t_lst **a_stack, t_lst **b_stack)
{
	pa(a_stack, b_stack);
	ra(a_stack);
	pa(a_stack, b_stack);
	ra(a_stack);
	pa(a_stack, b_stack);
	ra(a_stack);
}


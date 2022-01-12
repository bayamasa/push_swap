/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_moved_b_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:39:37 by mhirabay          #+#    #+#             */
/*   Updated: 2022/01/12 10:39:50 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_one_moved(t_lst **a_stack)
{
	sa(a_stack);
}

void	case_two_moved(t_lst **a_stack, t_lst **b_stack)
{
	pb(a_stack, b_stack);
	sa(a_stack);
	ra(a_stack);
	ra(a_stack);
	pa(a_stack, b_stack);
	rra(a_stack);
	rra(a_stack);
}

void	case_three_moved(t_lst **a_stack, t_lst **b_stack)
{
	pb(a_stack, b_stack);
	ra(a_stack);
	ra(a_stack);
	pa(a_stack, b_stack);
	rra(a_stack);
	rra(a_stack);
}

void	case_four_moved(t_lst **a_stack)
{
	ra(a_stack);
	sa(a_stack);
	rra(a_stack);
}

void	case_five_moved(t_lst **a_stack)
{
	ra(a_stack);
	sa(a_stack);
	rra(a_stack);
	sa(a_stack);
}

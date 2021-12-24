/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 20:22:28 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/24 20:28:36 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_zero(t_lst **a_stack)
{
	ra(a_stack);
	ra(a_stack);
	ra(a_stack);
}

void	case_one(t_lst **a_stack)
{
	sa(a_stack);
	ra(a_stack);
	ra(a_stack);
	ra(a_stack);
}

void	case_two(t_lst **a_stack, t_lst **b_stack)
{
	pb(a_stack, b_stack);
	sa(a_stack);
	ra(a_stack);
	ra(a_stack);
	pa(a_stack, b_stack);
	ra(a_stack);
}

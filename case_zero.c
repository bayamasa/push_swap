/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_zero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 21:49:21 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/24 22:17:10 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_zero_b(t_lst **a_stack, t_lst **b_stack)
{
	pa(a_stack, b_stack);
	pa(a_stack, b_stack);
	pa(a_stack, b_stack);
	ra(a_stack);
	ra(a_stack);
	ra(a_stack);
}

void	case_zero_a(t_lst **a_stack)
{
	ra(a_stack);
	ra(a_stack);
	ra(a_stack);
}

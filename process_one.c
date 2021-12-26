/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_one.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:22:09 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/24 23:21:31 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	process_one(void)
{
	return ;
}

void	process_one_a(t_lst **a_stack)
{
	ra(a_stack);
}

void	case_one_a(t_lst **a_stack)
{
	sa(a_stack);
	ra(a_stack);
	ra(a_stack);
	ra(a_stack);
}

void	case_one_b(t_lst **a_stack, t_lst **b_stack)
{
	pa(a_stack, b_stack);
	pa(a_stack, b_stack);
	ra(a_stack);
	ra(a_stack);
	pa(a_stack, b_stack);
	ra(a_stack);
}

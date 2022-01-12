/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:13:15 by mhirabay          #+#    #+#             */
/*   Updated: 2022/01/12 10:38:06 by mhirabay         ###   ########.fr       */
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

void	sort_four_a(t_lst **a_stack, t_lst **b_stack)
{
	pb(a_stack, b_stack);
	pb(a_stack, b_stack);
	pb(a_stack, b_stack);
	pb(a_stack, b_stack);
	sort_four_b(a_stack, b_stack);
}

void	sort_five_a(t_lst **a_stack, t_lst **b_stack)
{
	pb(a_stack, b_stack);
	pb(a_stack, b_stack);
	pb(a_stack, b_stack);
	pb(a_stack, b_stack);
	pb(a_stack, b_stack);
	sort_five_b(a_stack, b_stack);
}

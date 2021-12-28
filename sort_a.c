/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 10:38:19 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/27 21:41:16 by mhirabay         ###   ########.fr       */
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

void	process_four_a(t_lst **a_stack, t_lst **b_stack)
{
	pb(a_stack, b_stack);
	pb(a_stack, b_stack);
	pb(a_stack, b_stack);
	pb(a_stack, b_stack);
	process_four_b(a_stack, b_stack);
}

void	process_five_a(t_lst **a_stack, t_lst **b_stack)
{
	pb(a_stack, b_stack);
	pb(a_stack, b_stack);
	pb(a_stack, b_stack);
	pb(a_stack, b_stack);
	pb(a_stack, b_stack);
	process_five_b(a_stack, b_stack);
}


int	sort_top(t_lst **a_stack, t_lst **b_stack, int left)
{
	if (left == 1)
		process_one_a(a_stack);
	else if (left == 2)
		process_two_a(a_stack);
	else if (left == 3)
		process_three_a(a_stack, b_stack);
	else if (left == 4)
	{
		process_four_a(a_stack, b_stack);
	}
	else if (left == 5)
	{
		process_five_a(a_stack, b_stack);
	}
	
	
	return (true);
}

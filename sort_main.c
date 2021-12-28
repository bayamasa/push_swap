/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 16:56:20 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/28 16:58:46 by mhirabay         ###   ########.fr       */
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

void	process_one(void)
{
	return ;
}

void	process_two(t_lst **stack)
{
	if ((*stack)->num > (*stack)->next->num)
		sa(stack);
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

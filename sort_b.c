/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 20:35:40 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/24 23:24:10 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_case_for_b(int f, int s, int t)
{
	if (f > s && s > t)
		return (0);
	else if (f > s && t > f && s < t)
		return (1);
	else if (f > s && f > t && s < t)
		return (2);
	else if (f < s && f < t && s > t)
		return (3);
	else if (f < s && f > t && s > t)
		return (4);
	else if (f < s && s < t)
		return (5);
	return (-1);
}

int	push_sorted_b(t_lst **a_stack, t_lst **b_stack)
{
	int		i;
	int		size;

	i = 0;
	size = ft_lstsize(*b_stack);
	process_algo_b(a_stack, b_stack);
	return (true);
}

// void	process_three_b(t_lst **a_stack, t_lst **b_stack)
// {
// 	int	caze;

// 	caze = check_case_for_b((*b_stack)->num, (*b_stack)->next->num, \
// 		(*b_stack)->next->next->num);
// 	if (caze == 0)
// 		case_zero_b(a_stack, b_stack);
// 	else if (caze == 1)
// 		case_one_b(a_stack, b_stack);
// 	else if (caze == 2)
// 		case_two_b(a_stack, b_stack);
// 	else if (caze == 3)
// 		case_three_b(a_stack, b_stack);
// 	else if (caze == 4)
// 		case_four_b(a_stack, b_stack);
// 	else if (caze == 5)
// 		case_five_b(a_stack, b_stack);
// 	else
// 		abort_push_swap(b_stack);
// }

int	process_algo_b(t_lst **a_stack, t_lst **b_stack)
{
	int		size;

	size = ft_lstsize(*b_stack);
	if (size == 1)
	{
		pa(a_stack, b_stack);
		ra(a_stack);
		return (1);
	}
	else if (size == 2)
		process_two_b(a_stack, b_stack);
	else if (size == 3)
		process_three_b(a_stack, b_stack);
	else if (size == 4)
		process_four_b(a_stack, b_stack);
	else if (size == 5)
		process_five_b(a_stack, b_stack);
	return (size);
}

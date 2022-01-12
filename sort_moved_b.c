/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_moved_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:38:42 by mhirabay          #+#    #+#             */
/*   Updated: 2022/01/12 10:40:47 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_moved(t_lst **a_stack, t_lst **b_stack)
{
	int	caze;

	caze = check_case_a((*a_stack)->num, (*a_stack)->next->num, \
		(*a_stack)->next->next->num);
	if (caze == 0)
		return ;
	else if (caze == 1)
		case_one_moved(a_stack);
	else if (caze == 2)
		case_two_moved(a_stack, b_stack);
	else if (caze == 3)
		case_three_moved(a_stack, b_stack);
	else if (caze == 4)
		case_four_moved(a_stack);
	else if (caze == 5)
		case_five_moved(a_stack);
	else
		abort_push_swap(b_stack);
}

void	sort_six_b(t_lst **a_stack, t_lst **b_stack)
{
	int		mid_num;
	int		i;
	int		pa_count;

	i = 0;
	pa_count = 0;
	mid_num = get_index_from_bubble_sort(*b_stack, 2, 6);
	while (i < 6)
	{
		if (mid_num < (*b_stack)->num)
		{
			pa(a_stack, b_stack);
			pa_count++;
			if (pa_count == 3)
				break ;
		}
		else
			rb(b_stack);
		i++;
	}
	sort_three_moved(a_stack, b_stack);
	sort_three_b(a_stack, b_stack);
	ra(a_stack);
	ra(a_stack);
	ra(a_stack);
}

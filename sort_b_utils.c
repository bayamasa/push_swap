/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:06:02 by mhirabay          #+#    #+#             */
/*   Updated: 2022/01/12 14:14:46 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five_b(t_lst **a_stack, t_lst **b_stack)
{
	int		mid_num;
	int		i;
	int		pa_count;

	i = 0;
	pa_count = 0;
	mid_num = get_index_from_bubble_sort(*b_stack, 2, 5);
	while (i < 5)
	{
		if (mid_num < (*b_stack)->num)
		{
			pa(a_stack, b_stack);
			pa_count++;
			if (pa_count == 2)
				break ;
		}
		else
			rb(b_stack);
		i++;
	}
	if ((*a_stack)->num > (*a_stack)->next->num)
		sa(a_stack);
	sort_three_b(a_stack, b_stack);
	ra(a_stack);
	ra(a_stack);
}

int	get_max_index(t_lst *b_stack, int *max)
{
	int	i;
	int	max_index;

	i = 0;
	max_index = 0;
	*max = b_stack->num;
	while (b_stack != NULL)
	{
		if (*max < b_stack->num)
		{
			*max = b_stack->num;
			max_index = i;
		}
		i++;
		b_stack = b_stack->next;
	}
	return (max_index);
}

void	sort_four_b(t_lst **a_stack, t_lst **b_stack)
{
	int		max_index;
	int		max;

	max_index = get_max_index(*b_stack, &max);
	if (max_index >= 2)
		while ((*b_stack)->num != max)
			rrb(b_stack);
	else
		while ((*b_stack)->num != max)
			rb(b_stack);
	pa(a_stack, b_stack);
	sort_three_b(a_stack, b_stack);
	ra(a_stack);
}

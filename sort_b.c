/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 20:35:40 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/28 17:32:39 by mhirabay         ###   ########.fr       */
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

void	sort_two_b(t_lst **a_stack, t_lst **b_stack)
{
	if ((*b_stack)->num < (*b_stack)->next->num)
		sb(b_stack);
	pa(a_stack, b_stack);
	pa(a_stack, b_stack);
	ra(a_stack);
	ra(a_stack);
}

void	sort_three_b(t_lst **a_stack, t_lst **b_stack)
{
	int	caze;

	caze = check_case_for_b((*b_stack)->num, (*b_stack)->next->num, \
		(*b_stack)->next->next->num);
	if (caze == 0)
		case_zero_b(a_stack, b_stack);
	else if (caze == 1)
		case_one_b(a_stack, b_stack);
	else if (caze == 2)
		case_two_b(a_stack, b_stack);
	else if (caze == 3)
		case_three_b(a_stack, b_stack);
	else if (caze == 4)
		case_four_b(a_stack, b_stack);
	else if (caze == 5)
		case_five_b(a_stack, b_stack);
	else
		abort_push_swap(b_stack);
}

int	push_sorted_b(t_lst **a_stack, t_lst **b_stack)
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
		sort_two_b(a_stack, b_stack);
	else if (size == 3)
		sort_three_b(a_stack, b_stack);
	else if (size == 4)
		sort_four_b(a_stack, b_stack);
	else if (size == 5)
		sort_five_b(a_stack, b_stack);
	return (size);
}

void	sort_four_b(t_lst **a_stack, t_lst **b_stack)
{
	int		index_max;
	int		i;
	t_lst	*tmp;
	int		max;

	tmp = *b_stack;
	index_max = 0;
	i = 0;
	max = tmp->num;
	while (tmp != NULL)
	{
		if (max < tmp->num)
		{
			max = tmp->num;
			index_max = i;
		}
		i++;
		tmp = tmp->next;
	}
	tmp = *b_stack;
	if (index_max >= 2)
		while ((*b_stack)->num != max)
			rrb(b_stack);
	else
		while ((*b_stack)->num != max)
			rb(b_stack);
	pa(a_stack, b_stack);
	sort_three_b(a_stack, b_stack);
	ra(a_stack);
}

void	sort_five_b(t_lst **a_stack, t_lst **b_stack)
{
	int		mid_num;
	int		i;
	int		pa_count;

	i = 0;
	pa_count = 0;
	mid_num = get_middle_by_bubble_sort(*b_stack);
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_greater_equal_seven.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:08:01 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/15 20:47:46 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// pivotを求める → 理想は中央値であるが、めんどいので今回は最初の値にする。
// 

void	process_greater_equal_seven(t_lst **a_stack)
{
	int		pivot;
	t_lst	*b_stack;
	int		index;

	b_stack = NULL;
	index = 0;
	pivot = median(*a_stack);
	ra(a_stack);
	while ((*a_stack)->num != pivot)
	{
		if (pivot > (*a_stack)->num)
			pb(a_stack, &b_stack);
		else
			ra(a_stack);
	}
	while (*b_stack == NULL)
	{
		push_min_to_b(a_stack, &b_stack);
		ra(a_stack);
	}
}

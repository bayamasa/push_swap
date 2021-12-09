/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_ge_seven.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:18:38 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/09 17:02:19 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_min_B_to_A(t_plist **a_stack, t_plist **b_stack)
{
	int	i;
	int	i_min;

	i_min = min(*b_stack);
	i = 0;
	while (i < i_min)
	{
		ra(a_stack);
	}
	pa(a_stack, b_stack);
	ra(a_stack);
}

int	push_lt_A_to_B(t_plist **a_stack, t_plist **b_stack)
{
	int	pivot;

	while ((*a_stack)->next != NULL)
	{
		if (pivot > (*a_stack)->num)
		{
			*b_stack = (t_plist *)malloc(sizeof(t_plist));
				// 何かエラーが出たときにはErrorとだけ出力するべきなのだから、
				// mallocのnullなどが全て終わったタイミングでprintしないといけないのでは？
			if (*b_stack == NULL)
				print_error(*a_stack);
			pb(a_stack, b_stack);
		}
		if (*a_stack != NULL)
			*a_stack = (*a_stack)->next;
	}	
	return (true);
}

int	check_sort_complete(t_plist *a_stack)
{
	while (a_stack->next != NULL)
	{
		if (a_stack->num > a_stack->next->num)
			return (false);
		a_stack = a_stack->next;
	}
	return (true);
}

void	process_ge_seven(t_plist *a_stack)
{
	t_plist	*b_stack;

	// これを全ての値がソートされるまで繰り返すだけ
	while (!check_sort_complete(a_stack))
	{
		push_lt_pivot_A_to_B(&a_stack, &b_stack);
		while (b_stack != NULL)
		{
			push_min_B_to_A(&a_stack, &b_stack);
			b_stack = b_stack->next;
		}
	}
}

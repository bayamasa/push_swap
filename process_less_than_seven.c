/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_less_than_seven.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:29:59 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/14 10:30:57 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_min_to_b(t_lst **a_stack, t_lst **b_stack)
{
	int	i;
	int	i_min;

	i = 0;
	i_min = min(*a_stack);
	printf("i_min = %d\n", i_min);
	while (i < i_min)
	{
		ra(a_stack);
		i++;
	}
	pb(a_stack, b_stack);
	return (1);
}

void	process_less_than_seven(t_lst **a_stack)
{
	int		i;
	int		size;
	int		status;
	t_lst	*b_stack;

	i = 0;
	b_stack = NULL;
	size = ft_lstsize(*a_stack);
	while (i < size - 3)
	{
		status = push_min_to_b(a_stack, &b_stack);
		printf("(b_stack)->num = %d\n", (b_stack)->num);
		if (status == -1)
		{
			free_all(&b_stack);
			abort_push_swap(a_stack);
		}
		i++;
	}
	process_three(a_stack);
	i = 0;
	while (i < size - 3)
	{
		// printf("(b_stack)->num = %d\n", (b_stack)->num);
		pa(a_stack, &b_stack);
		printf("(*a_stack)->num = %d\n", (*a_stack)->num);
		i++;
	}
}

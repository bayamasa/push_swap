/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_less_than_seven.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:29:59 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/10 09:34:44 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_min_to_b(t_lst **a_stack, t_lst **b_stack)
{
	int	i;
	int	i_min;

	i = 0;
	i_min = min(*a_stack);
	while (i < i_min)
	{
		ra(a_stack);
	}
	*b_stack = (t_lst *)malloc(sizeof(t_lst));
	if (b_stack == NULL)
		return (-1);
	pb(a_stack, b_stack);
	return (1);
}

void	process_less_than_seven(t_lst *a_stack)
{
	int		i;
	int		size;
	int		status;
	t_lst	*b_stack;

	i = 0;
	size = ft_lstsize(a_stack);
	while (i < size - 3)
	{
		status = push_min_to_b(&a_stack, &b_stack);
		if (status == -1)
			//b_stackもfreeするように実装するべし
			print_error(a_stack);
		b_stack = b_stack->next;
		i++;
	}
	process_three(a_stack);
	i = 0;
	while (i < size - 3)
	{
		pa(&a_stack, &b_stack);
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_less_than_seven.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:29:59 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/20 17:02:43 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		status = push_min(a_stack, &b_stack);
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
		pa(a_stack, &b_stack);
		i++;
	}
}

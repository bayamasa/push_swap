/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:39:19 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/10 09:34:44 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// 最小値のindexを返す
int	min(t_lst *stack)
{
	t_lst	*min;
	int		index;
	int		ret;

	min = stack;
	index = 0;
	ret = index;
	while (stack->next != NULL)
	{
		printf("min->num = %d\n", min->num);
		printf("stack->next->num = %d\n", stack->next->num);
		if (min->num < stack->next->num)
		{
			MYDEBUG();
			min = stack;
			ret = index;
		}
		stack = stack->next;
		index++;
	}
	return (ret);
}

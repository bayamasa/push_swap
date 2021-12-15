/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:39:19 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/15 10:59:33 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min(t_lst *stack)
{
	t_lst	*min;
	int		index;
	int		ret;

	min = stack;
	index = 0;
	ret = index;
	if (stack == NULL)
		return (-1);
	while (stack->next != NULL)
	{
		index++;
		if (min->num > stack->next->num)
		{
			min = stack->next;
			ret = index;
		}
		stack = stack->next;
	}
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:41:58 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/26 13:18:29 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push(t_lst **a, t_lst **b)
{
	t_lst	*tmp;

	if (a == NULL || b == NULL)
		return (false);
	if (*b == NULL)
		return (true);
	tmp = (*b)->next;
	ft_lstadd_front(a, *b);
	*b = tmp;
	return (true);
}

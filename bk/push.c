/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:41:58 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/13 15:49:03 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push(t_lst **a, t_lst **b)
{
	// debug用
	if (a == NULL || b == NULL)
	{
		MYDEBUG();
		return (false);
	}
	if (*b == NULL)
		return (true);
	ft_lstadd_front(a, *b);
	ft_lstdel_front(b);
	return (true);
}

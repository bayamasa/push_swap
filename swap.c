/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:44:59 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/13 20:23:22 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// 前提として同じ数値は入ることがないので、同じ数値があることへのバリデーションはつくらない
int	swap(t_lst **a)
{
	size_t	size;
	t_lst	*tmp;

	size = ft_lstsize(*a);
	if (size <= 1)
		return (false);
	if ((*a)->next->next != NULL)
		tmp = (*a)->next->next;
	else
		tmp = NULL;
	ft_lstadd_front(a, (*a)->next);
	(*a)->next->next = tmp;
	return (true);
}

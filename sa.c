/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:44:59 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/03 14:17:30 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// 前提として同じ数値は入ることがないので、同じ数値があることへのバリデーションはつくらない
int	sa(t_plist **a)
{
	t_plist	tmp;
	size_t	size;

	size = ft_plstsize(*a);
	if (size <= 1)
		return (false);
	ft_plstadd_front(a, (*a)->next);
	return (true);
}

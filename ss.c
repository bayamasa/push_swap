/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:14:32 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/03 15:58:15 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ss(t_plist **a, t_plist **b)
{
	size_t	size_a;
	size_t	size_b;

	size_a = ft_plstsize(*a);
	size_b = ft_plstsize(*b);
	if (size_a <= 1 || size_b <= 1)
		return (false);
	ft_plstadd_front(a, (*a)->next);
	ft_plstadd_front(b, (*b)->next);
	return (true);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:12:18 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/03 14:43:11 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sb(t_plist **b)
{
	size_t	size;

	size = ft_plstsize(*b);
	if (size <= 1)
		return (false);
	ft_plstadd_front(b, (*b)->next);
	return (true);
}

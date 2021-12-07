/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:06:35 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/07 17:23:53 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_plist **a, t_plist **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_putstr_fd(RRR, 1);
}

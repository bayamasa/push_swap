/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:06:35 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/23 19:56:01 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_lst **a, t_lst **b)
{
	rotate(*a);
	rotate(*b);
	// printf("rr kimast\n");
	// print_all(a);
	// printf("b\n");
	// print_all(b);
	ft_putstr_fd(RR, 1);
}

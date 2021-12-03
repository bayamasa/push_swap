/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:41:58 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/03 18:01:12 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pb(t_plist **a, t_plist **b)
{
	t_plist	*tmp;

	// debug用
	if (a == NULL || b == NULL)
	{
		MYDEBUG();
		return (false);
	}
	if (*a == NULL)
		return (true);
	if (*b == NULL)
	{
		*b = ft_plstnew((*a)->num);
		ft_plstdel_front(a);
	}
	else
	{
		ft_plstaddone_front(b, *a);
		ft_plstdel_front(a);
	}
	return (true);
}

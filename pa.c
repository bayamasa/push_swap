/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:41:58 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/03 17:50:07 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pa(t_plist **a, t_plist **b)
{
	t_plist	*tmp;

	// debug用
	if (a == NULL || b == NULL)
	{
		MYDEBUG();
		return (false);
	}
	if (*b == NULL)
	{
		MYDEBUG();
		return (true);
	}
	if (*a == NULL)
	{
		*a = ft_plstnew((*b)->num);
		ft_plstdel_front(b);
		return (true);
	}
	else
	{
		ft_plstaddone_front(a, *b);
		ft_plstdel_front(b);
		return (true);
	}
	return (true);
}

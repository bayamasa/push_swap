/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:41:58 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/03 17:57:55 by mhirabay         ###   ########.fr       */
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
		return (true);
	if (*a == NULL)
	{
		*a = ft_plstnew((*b)->num);
		ft_plstdel_front(b);
	}
	else
	{
		ft_plstaddone_front(a, *b);
		ft_plstdel_front(b);
	}
	return (true);
}

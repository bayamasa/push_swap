/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:05:16 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/13 17:18:30 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate(t_lst *tg)
{
	int		first;

	if (tg == NULL)
		return (true);
	first = (tg)->num;
	while ((tg)->next != NULL)
	{
		(tg)->num = (tg)->next->num;
		(tg) = (tg)->next;
	}
	(tg)->num = first;
	return (true);
}

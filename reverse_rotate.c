/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:05:16 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/03 21:47:00 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	reverse_rotate(t_plist *tg)
{
	t_plist		*first;
	int			tmp;
	int			next;
	if (tg == NULL)
	{
		return (true);
	}
	first = tg;
	while (tg->next != NULL)
	{
		tmp = tg->next->num;
		tg->next->num = tg->next;
		tg = tg->next;
	}
	first->num = tmp;
	return (true);
}

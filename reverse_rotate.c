/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:05:16 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/10 09:34:44 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// やること
// firstを保存しておく
// lastの一個手前のnextをnullにする →　循環にならないように
// lastを保存しておく
// add_frontに入れる
int	reverse_rotate(t_lst **a)
{
	t_lst		*first;
	t_lst		*last;
	t_lst		*last_prev;
	t_lst		*tg;

	tg = *a;
	first = tg;
	if (tg == NULL)
		return (true);
	while (tg->next->next != NULL)
		tg = tg->next;
	last_prev = tg;
	last = tg->next;
	last_prev->next = NULL;
	tg = first;
	ft_lstaddone_front(a, last);
	return (true);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:05:16 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/06 13:50:53 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate(t_plist *tg)
{
	int		first;

	if (tg == NULL)
	{
		return (true);
	}
	first = (tg)->num;
	printf("first = %d\n", first);
	while ((tg)->next != NULL)
	{
		printf("(*tg)->num = %d\n", (tg)->num);
		(tg)->num = (tg)->next->num;
		(tg) = (tg)->next;
	}
	(tg)->num = first;
	return (true);
}

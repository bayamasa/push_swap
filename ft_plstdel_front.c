/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_plstdel_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:31:59 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/03 17:54:52 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_plstdel_front(t_plist **lst)
{	
	t_plist	*tmp;

	if (lst == NULL)
		return (false);
	// lstに一つしか要素がない場合、つまりnextがnullの場合lstはnullになる
	tmp = (*lst)->next;
	free(*lst);
	*lst = tmp;
	return (true);
}

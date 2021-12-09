/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_plstaddone_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:59:40 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/09 15:33:46 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_plstaddone_front(t_plist **lst, t_plist *new)
{	
	t_plist	*tmp;

	if (!lst || !new)
		return (false);
	tmp = ft_plstnew(new->num);
	if (tmp == NULL)
		return (false);
	tmp->next = *lst;
	*lst = tmp;
	return (true);
}

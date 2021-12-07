/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_plstaddone_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:59:40 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/06 14:26:38 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_plstaddone_front(t_plist **lst, t_plist *new)
{	
	t_plist	*tmp;

	if (!lst || !new)
		return ;
	tmp = ft_plstnew(new->num);
	tmp->next = *lst;
	*lst = tmp;
	printf("*lst->next = %d\n", (*lst)->num);
}

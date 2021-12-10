/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddone_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:59:40 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/09 15:33:46 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

int	ft_lstaddone_front(t_lst **lst, t_lst *new)
{	
	t_lst	*tmp;

	if (!lst || !new)
		return (false);
	tmp = ft_lstnew(new->num);
	if (tmp == NULL)
		return (false);
	tmp->next = *lst;
	*lst = tmp;
	return (true);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_plstmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:31:34 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/03 13:20:34 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_plist	*ft_plstmap(t_plist *lst, int (*f)(void *), void (*del)(void *))
{
	t_plist	*new_list;
	t_plist	*tmp;

	if (!lst || !f)
		return (NULL);
	new_list = ft_plstnew(f((void *)lst));
	if (new_list == NULL)
	{
		ft_plstclear(&new_list, del);
		return (NULL);
	}
	tmp = new_list;
	lst = lst->next;
	while (lst)
	{
		tmp->next = ft_plstnew(f((void *)lst));
		if (!tmp->next)
		{
			ft_plstclear(&new_list, del);
			return (NULL);
		}
		lst = lst->next;
		tmp = tmp->next;
	}
	return (new_list);
}

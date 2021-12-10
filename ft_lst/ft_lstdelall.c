/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:26:37 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/10 14:29:04 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

int	ft_lstdelall(t_lst *lst)
{
	if (lst == NULL)
		return (false);
	while (lst != NULL)
	{
		ft_lstdelone(lst);
		
	}
	return (true);
}


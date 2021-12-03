/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_plstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:31:37 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/03 12:16:03 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_plist	*ft_plstnew(int num)
{
	t_plist	*new_list;

	new_list = (t_plist *)malloc(sizeof(t_plist));
	if (new_list == NULL)
		return (NULL);
	new_list->num = num;
	new_list->next = NULL;
	return (new_list);
}

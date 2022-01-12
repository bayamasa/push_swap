/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:32:00 by mhirabay          #+#    #+#             */
/*   Updated: 2022/01/12 15:34:33 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_ra(t_lst **a_stack, int times)
{
	int	i;

	i = 0;
	while (i < times)
	{
		ra(a_stack);
		i++;
	}
}

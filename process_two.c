/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:41:11 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/13 17:30:05 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	process_two(t_lst **stack)
{
	if ((*stack)->num > (*stack)->next->num)
		sa(stack);
}

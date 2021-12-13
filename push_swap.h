/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:40:49 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/13 15:58:06 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include "ft_lst/ft_lst.h"
# include "lib/ft_printf/ft_printf.h"
#define MYDEBUG() printf("\x1b[46m%s[%d] %s\x1b[49m\n", __FILE__, __LINE__, __func__);
# define ERROR "Error\n"
# define SA "sa\n"
# define SB "sb\n"
# define SS "ss\n"
# define PA "pa\n"
# define PB "pb\n"
# define RA "ra\n"
# define RB "rb\n"
# define RR "rr\n"
# define RRA "rra\n"
# define RRB "rrb\n"
# define RRR "rrr\n"

void	process_one(void);
void	process_two(t_lst **stack);
void	process_three(t_lst **stack);
void	pa(t_lst **a, t_lst **b);
int		push(t_lst **a, t_lst **b);

#endif


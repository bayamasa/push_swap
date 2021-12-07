/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:24:40 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/07 17:29:40 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#define MYDEBUG() printf("\x1b[46m%s[%d] %s\x1b[49m\n", __FILE__, __LINE__, __func__);

# define ERROR "Error\n"
# define SA "sa"
# define SB "sb"
# define SS "ss"
# define PA "pa"
# define PB "pb"
# define RA "ra"
# define RB "rb"
# define RR "rr"
# define RRA "rra"
# define RRB "rrb"
# define RRR "rrr"

# include "lib/ft_printf/ft_printf.h"

typedef struct s_plist
{
	int				num;
	struct s_plist	*next;
}	t_plist;

void	process_algo(t_plist *stack);

size_t	ft_plstsize(t_plist *lst);
t_plist	*ft_plstnew(int num);

t_plist	*ft_plstlast(t_plist *lst);
void	ft_plstdelone(t_plist *lst);
void	ft_plstadd_front(t_plist **lst, t_plist *new);
void	ft_plstadd_back(t_plist **lst, t_plist *new);
int		ft_plstdel_front(t_plist **lst);
void	ft_plstaddone_front(t_plist **lst, t_plist *new);

int		swap(t_plist **a);
int		push(t_plist **a, t_plist **b);
int		rotate(t_plist *tg);
int		reverse_rotate(t_plist **tg);

void	sa(t_plist **a);
void	sb(t_plist **b);
void	ss(t_plist **a, t_plist **b);
void	pa(t_plist **a, t_plist **b);
void	pb(t_plist **a, t_plist **b);
void	ra(t_plist **a);
void	rb(t_plist **b);
void	rr(t_plist **a, t_plist **b);
void	rra(t_plist **a);
void	rrb(t_plist **b);
void	rrr(t_plist **a, t_plist **b);

void	process_one(t_plist *stack);
void	process_two(t_plist *stack);
void	process_three(t_plist *stack);
void	process_less_than_seven(t_plist *stack);
void	process_quick_sort(t_plist *stack);

#endif

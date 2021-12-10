/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:24:40 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/10 09:34:44 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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

# include "lib/ft_printf/ft_printf.h"

typedef struct s_plist
{
	int				num;
	struct s_plist	*next;
}	t_lst;

void	process_algo(t_lst *stack);

size_t	ft_lstsize(t_lst *lst);
t_lst	*ft_lstnew(int num);

t_lst	*ft_lstlast(t_lst *lst);
void	ft_lstdelone(t_lst *lst);
void	ft_lstadd_front(t_lst **lst, t_lst *new);
void	ft_lstadd_back(t_lst **lst, t_lst *new);
int		ft_lstdel_front(t_lst **lst);
void	ft_lstaddone_front(t_lst **lst, t_lst *new);

int		swap(t_lst **a);
int		push(t_lst **a, t_lst **b);
int		rotate(t_lst *tg);
int		reverse_rotate(t_lst **tg);

void	sa(t_lst **a);
void	sb(t_lst **b);
void	ss(t_lst **a, t_lst **b);
void	pa(t_lst **a, t_lst **b);
void	pb(t_lst **a, t_lst **b);
void	ra(t_lst **a);
void	rb(t_lst **b);
void	rr(t_lst **a, t_lst **b);
void	rra(t_lst **a);
void	rrb(t_lst **b);
void	rrr(t_lst **a, t_lst **b);

void	process_one(t_lst *stack);
void	process_two(t_lst *stack);
void	process_three(t_lst *stack);
void	process_less_than_seven(t_lst *stack);
void	process_quick_sort(t_lst *stack);
void	print_error(t_lst *stack);
void	finish(t_lst *stack);
int		min(t_lst *stack);

#endif

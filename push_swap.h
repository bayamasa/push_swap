/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:24:40 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/07 12:22:21 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#define MYDEBUG() printf("\x1b[46m%s[%d] %s\x1b[49m\n", __FILE__, __LINE__, __func__);

# define ERROR "Error\n"
# include "lib/ft_printf/ft_printf.h"

typedef struct s_plist
{
	int				num;
	struct s_plist	*next;
}	t_plist;

size_t	ft_plstsize(t_plist *lst);
t_plist	*ft_plstnew(int num);
t_plist	*ft_plstmap(t_plist *lst, int (*f)(void *), void (*del)(void *));

t_plist	*ft_plstlast(t_plist *lst);
void	ft_plstdelone(t_plist *lst);
void	ft_plstclear(t_plist **lst, void (*del)(void *));
void	ft_plstadd_front(t_plist **lst, t_plist *new);
void	ft_plstadd_back(t_plist **lst, t_plist *new);
int		ft_plstdel_front(t_plist **lst);
void	ft_plstaddone_front(t_plist **lst, t_plist *new);

void	args_error_handling(int argc, char const *argv[]);
int		swap(t_plist **a);
int		push(t_plist **a, t_plist **b);
int		rotate(t_plist *tg);
int		reverse_rotate(t_plist **tg);


#endif

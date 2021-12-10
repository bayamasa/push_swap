/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 09:32:37 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/10 17:12:39 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LST_H
# define FT_LST_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>

#define MYDEBUG() printf("\x1b[46m%s[%d] %s\x1b[49m\n", __FILE__, __LINE__, __func__);

typedef struct s_lst
{
	int				num;
	struct s_lst	*next;
}	t_lst;

int		ft_lstadd_back(t_lst **lst, t_lst *new);
void	ft_lstadd_front(t_lst **lst, t_lst *new);
int		ft_lstaddone_front(t_lst **lst, t_lst *new);
void	ft_lstclear(t_lst **lst, void (*del)(void *));
int		ft_lstdel_front(t_lst **lst);
void	ft_lstdelone(t_lst *lst);
void	ft_lstiter(t_lst *lst, void (*f)(void *));
t_lst	*ft_lstlast(t_lst *lst);
t_lst	*ft_lstmap(t_lst *lst, int (*f)(void *), void (*del)(void *));
t_lst	*ft_lstnew(int num);
size_t	ft_lstsize(t_lst *lst);

#endif

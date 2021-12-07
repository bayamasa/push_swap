/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:21:35 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/07 17:29:27 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static void	print_error(t_plist *stack)
{
	// 使用したstackを全て削除しなくてはならない。
	free(stack);
	ft_putstr_fd(ERROR, 2);
	exit(1);
}

static t_plist	*args_error_handling(int argc, char const *argv[])
{
	int			i;
	int			status;
	t_plist		*first;
	t_plist		*stack;
	t_plist		*tmp;
	int			value;

	i = 0;
	stack = (t_plist *)malloc(sizeof(t_plist));
	first = stack;
	if (argc <= 1)
		print_error(stack);
	while (i < argc - 1)
	{
		value = (int)ft_atoi_error(argv[i + 1], &status);
		stack->num = value;
		if (status == false)
		{
			MYDEBUG();
			print_error(stack);
		}
		tmp = stack;
		stack = first;
		while (stack != tmp)
		{
			if (stack->num == value)
			{
				MYDEBUG();
				print_error(stack);
			}
			stack = stack->next;
		}
		stack = tmp;
		stack->next = (t_plist *)malloc(sizeof(t_plist));
		i++;
	}
	return (first);
}

void	process_algo(t_plist *stack)
{
	int		i;
	t_plist	*tmp;

	i = 1;
	tmp = stack;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (i == 1)
		process_one(stack);
	else if (i == 2)
		process_two(stack);
	else if (i == 3)
		process_three(stack);
	else if (i > 3 && i < 7)
		process_less_than_seven(stack);
	else
		process_quick_sort(stack);
	exit(0);
}

int	main(int argc, char const *argv[])
{
	t_plist	*stack;

	stack = args_error_handling(argc, argv);
	process_algo(stack);
	return (0);
}

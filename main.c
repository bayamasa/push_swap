/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:21:35 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/07 12:22:56 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static void	print_error(int *stack)
{
	free(stack);
	ft_putstr_fd(ERROR, 1);
	exit(1);
}

void	args_error_handling(int argc, char const *argv[])
{
	int			i;
	int			j;
	int			status;
	int			*stack;
	int			value;

	i = 0;
	stack = (int *)malloc(sizeof(int) * (argc - 1));
	if (argc <= 1)
		print_error(stack);
	while (i < argc - 1)
	{
		value = (int)ft_atoi_error(argv[i + 1], &status);
		*(stack + i) = value;
		if (status == false)
			print_error(stack);
		j = 0;
		while (j < i)
			if (stack[j++] == value)
				print_error(stack);
		i++;
	}
}

int	main(int argc, char const *argv[])
{
	args_error_handling(argc, argv);
	
	return (0);
}

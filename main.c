/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:21:35 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/02 21:51:22 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(void)
{
	ft_putstr_fd(ERROR, 1);
	exit(1);
}

void	args_error_handling(int argc, char const *argv[])
{
	long long	num;
	int			i;
	int			*status;

	if (argc <= 1)
	{
		print_error();
	}
	while (i < argc - 1)
	{
		ft_atoi_error(argv[i], status);
		if (*status == false)
		{
			print_error();
			break ;
		}
		i++;
	}
}

int	main(int argc, char const *argv[])
{
	args_error_handling(argc, argv);
	return (0);
}

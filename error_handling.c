/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 20:52:47 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/24 21:00:08 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	abort_push_swap(void *heap)
{
	if (heap != NULL)
		free(heap);
	ft_putstr_fd(ERROR, 2);
	exit(1);
}

void	check_not_same_num(int size, int *value)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (value[i] == value[j])
				abort_push_swap((void *)value);
			j++;
		}
		i++;
	}
}

int	*check_num_validation(int size, char const *argv[])
{
	int	i;
	int	status;
	int	*value;

	i = 0;
	value = (int *)malloc(sizeof(int) * (size));
	if (value == NULL)
		abort_push_swap((void *)value);
	while (i < size)
	{
		*(value + i) = (int)ft_atoi_error(argv[i + 1], &status);
		if (status == false)
			abort_push_swap((void *)value);
		i++;
	}
	return (value);
}

void	free_all(t_lst **stack)
{
	t_lst	*tmp;

	tmp = *stack;
	while ((*stack) != NULL)
	{
		free(*stack);
		(*stack) = (*stack)->next;
	}
	free(stack);
}

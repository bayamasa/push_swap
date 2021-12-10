/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 09:39:27 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/10 14:41:38 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	abort_push_swap(void *heap)
{
	// 使用したstackを全て削除しなくてはならない。
	if (heap != NULL)
		free(heap);
	ft_putstr_fd(ERROR, 2);
	exit(1);
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

t_lst	*store_all_values(t_lst *stack, int *value, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		stack = ft_lstnew(value[i]);
		if (stack == NULL)
		
		
	}
	
}



static t_lst	*args_error_handling(int argc , char const *argv[])
{
	int			size;
	t_lst		*stack;
	int			*value;

	// 引数の数のチェック
	if (argc <= 1)
		abort_push_swap(NULL);
	size = argc - 1;
	// 数値が来ているかチェック
	// intの範囲内にあるかチェック
	value = check_num_validation(size, argv);
	// 同じ数字があるかチェック
	check_not_same_num(size, value);
	// valueをstackに格納
	stack = store_all_values(stack, value, size);
	return (NULL);
}

int main(int argc, char const *argv[])
{
	t_lst *stack;
	stack = args_error_handling(argc, argv);
	return 0;
}


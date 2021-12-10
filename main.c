/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 09:39:27 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/10 17:20:06 by mhirabay         ###   ########.fr       */
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

void	free_all(t_lst **stack)
{
	t_lst	*tmp;

	tmp = *stack;
	printf("stack : %p\n", stack);
	printf("*stack : %d\n", (*stack)->num);
	while (*stack != NULL)
	{
		MYDEBUG();
		free(*stack);
		*stack = (*stack)->next;
	}
	free(stack);
}

t_lst	**store_all_values(t_lst **stack, int *value, int size)
{
	int	i;
	t_lst *tmp;

	i = 0;
	if(stack == NULL)
		printf("stack is NULL\n");
	if(*stack == NULL)
		printf("*stack is NULL\n");
	printf("*stack = %p\n", *stack);
	while (i < size)
	{
		tmp = ft_lstnew(value[i]);
		printf("tmp->num = %d\n", tmp->num);
		ft_lstadd_back(stack, tmp);
		if (*stack == NULL)
		{
			MYDEBUG();
			free_all(stack);
			abort_push_swap(value);
		}
		MYDEBUG();
		(*stack) = (*stack)->next;
		i++;
	}
	return (stack);
}

static t_lst	*args_to_stack(int argc , char const *argv[])
{
	int			size;
	t_lst		*stack;
	int			*value;

	// 引数の数のチェック
	if (argc <= 1)
		abort_push_swap(NULL);
	size = argc - 1;
	printf("*stack = %p\n", *stack);
	// stack = (t_lst **)malloc(sizeof(t_lst *));
	// 数値が来ているかチェック
	// intの範囲内にあるかチェック
	value = check_num_validation(size, argv);
	// 同じ数字があるかチェック
	check_not_same_num(size, value);
	// valueをstackに格納
	store_all_values(&stack, value, size);
	// free_all(stack);
	free(value);
	return (NULL);
}

int main(int argc, char const *argv[])
{
	t_lst *stack;
	stack = args_to_stack(argc, argv);
	system("leaks a.out");
	return 0;
}


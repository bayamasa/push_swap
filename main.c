/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 09:39:27 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/13 21:15:40 by mhirabay         ###   ########.fr       */
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
	while ((*stack) != NULL)
	{
		free(*stack);
		(*stack) = (*stack)->next;
	}
	free(stack);
}

t_lst	**store_all_values(t_lst **stack, int *value, int size)
{
	int		i;
	t_lst	*tmp;

	i = 0;
	while (i < size)
	{
		tmp = ft_lstnew(value[i]);
		ft_lstadd_back(stack, tmp);
		if (*stack == NULL)
			abort_push_swap(value);
		i++;
	}
	return (stack);
}

static t_lst	**args_to_stack(int argc , char const *argv[])
{
	int			size;
	t_lst		**stack;
	int			*value;

	// 引数の数のチェック
	if (argc <= 1)
		abort_push_swap(NULL);
	size = argc - 1;
	// stack = NULL;
	stack = (t_lst **)malloc(sizeof(t_lst *));
	if (stack == NULL)
		abort_push_swap(NULL);
	// 数値が来ているかチェック
	// intの範囲内にあるかチェック
	value = check_num_validation(size, argv);
	// 同じ数字があるかチェック
	check_not_same_num(size, value);
	// valueをstackに格納
	store_all_values(stack, value, size);
	// free_all(stack);
	free(value);
	return (stack);
}

void	process_algo(t_lst **stack)
{
	size_t		size;

	size = ft_lstsize(*stack);
	printf("size = %zu\n", size);
	if (size == 1)
		process_one();
	else if (size == 2)
		process_two(stack);
	else if (size == 3)
		process_three(stack);
	else if (size > 3 && size < 7)
		process_less_than_seven(stack);
	// else
	// 	process_quick_sort(stack);
}

void	print_all(t_lst **stack)
{
	t_lst *tmp;
	int		i;

	i = 1;

	tmp = *stack;
	while(tmp != NULL)
	{
		printf("stack No.%d, is %d\n", i, (tmp)->num);
		tmp = tmp->next;
		i++;
	}
}


int main(int argc, char const *argv[])
{
	t_lst **stack;
	stack = args_to_stack(argc, argv);
	// printf("(*stack)->num = %d\n", (*stack)->num);
	// printf("(*stack)->next->num = %d\n", (*stack)->next->num);
	// printf("(*stack)->next->next->num = %d\n", (*stack)->next->next->num);
	process_algo(stack);
	print_all(stack);
	free_all(stack);
	// system("leaks a.out");
	return 0;
}


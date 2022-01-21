/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 09:39:27 by mhirabay          #+#    #+#             */
/*   Updated: 2022/01/21 20:54:06 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst	**store_all_values(t_lst **stack, int *value, int size)
{
	int		i;
	t_lst	*tmp;

	i = 0;
	while (i < size)
	{
		tmp = ft_lstnew(value[i]);
		if (tmp == NULL)
			abort_ps_free_all(value, stack);
		ft_lstadd_back(stack, tmp);
		i++;
	}
	return (stack);
}

static t_lst	**args_to_stack(int argc, char const *argv[])
{
	int			size;
	t_lst		**stack;
	int			*value;

	size = argc - 1;
	stack = (t_lst **)malloc(sizeof(t_lst *));
	if (stack == NULL)
		abort_push_swap(NULL);
	stack[0] = NULL;
	value = check_num_validation(size, argv, stack);
	check_not_same_num(size, value, stack);
	store_all_values(stack, value, size);
	free(value);
	return (stack);
}

int	sort_main(t_lst **stack)
{
	int		size;

	size = ft_lstsize(*stack);
	if (size == 1)
		return (size);
	else if (size == 2)
		sort_two(stack);
	else if (size == 3)
		sort_three(stack);
	else if (size > 3 && size < 7)
		sort_less_than_seven(stack);
	else
		sort_greater_equal_seven(stack);
	return (size);
}

int	main(int argc, char const *argv[])
{
	t_lst	**stack;

	if (argc == 1)
		return (0);
	stack = args_to_stack(argc, argv);
	sort_main(stack);
	free_all(stack);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 09:39:27 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/28 16:59:43 by mhirabay         ###   ########.fr       */
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
		ft_lstadd_back(stack, tmp);
		if (*stack == NULL)
			abort_push_swap(value);
		i++;
	}
	return (stack);
}

static t_lst	**args_to_stack(int argc, char const *argv[])
{
	int			size;
	t_lst		**stack;
	int			*value;

	if (argc <= 1)
		abort_push_swap(NULL);
	size = argc - 1;
	stack = (t_lst **)malloc(sizeof(t_lst *));
	if (stack == NULL)
		abort_push_swap(NULL);
	value = check_num_validation(size, argv);
	check_not_same_num(size, value);
	store_all_values(stack, value, size);
	free(value);
	return (stack);
}

int	process_algo(t_lst **stack)
{
	int		size;

	size = ft_lstsize(*stack);
	if (size == 1)
		process_one();
	else if (size == 2)
		process_two(stack);
	else if (size == 3)
		process_three(stack);
	else if (size > 3 && size < 7)
		process_less_than_seven(stack);
	else
		process_greater_equal_seven(stack);
	return (size);
}

int	main(int argc, char const *argv[])
{
	t_lst	**stack;

	stack = args_to_stack(argc, argv);
	process_algo(stack);
	free_all(stack);
	// system("leaks push_swap");
	return 0;
}

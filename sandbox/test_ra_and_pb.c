#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

#include "../push_swap.h"

void	test_print_all(t_lst **stack)
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
static void	rocess_greater_equal_seven(t_lst **a_stack)
{
	int		pivot;
	t_lst	*b_stack;
	int		index;
	int		res;

	res = false;
	b_stack = NULL;
	index = 0;
	pivot = (*a_stack)->num;
	ra(a_stack);
	while ((*a_stack)->num != pivot)
	{
		if (pivot > (*a_stack)->num)
			pb(a_stack, &b_stack);
		else
			ra(a_stack);
	}
	while (1)
	{
		res = push_min(&b_stack, a_stack);
		if (res == false)
			break ;
		ra(a_stack);
	}
}

int	main()
{
	t_lst *a = ft_lstnew(3);
	t_lst *b = ft_lstnew(2);
	t_lst *c = ft_lstnew(1);

	ft_lstadd_back(&a, b);
	ft_lstadd_back(&a, c);
	rocess_greater_equal_seven(&a);
	print_all(&a);

	return (0);
}

#include "push_swap.h"

int	get_middle_by_bubble_sort(t_lst *b_stack)
{
	int		i;
	int		j;
	int		tmp;
	int		stack[ARG_MAX];

	i = 0;
	while (i < 5)
	{
		stack[i] = b_stack->num;
		b_stack = b_stack->next;
		i++;
	}
	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 5 - 1)
		{
			if (stack[j] > stack[j + 1])
			{
				tmp = stack[j];
				stack[j] = stack[j + 1];
				stack[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	return (stack[(2)]);
}

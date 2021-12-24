#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

#include "../push_swap.h"

int	main()
{
	t_lst *a = ft_lstnew(2);
	t_lst *b = ft_lstnew(3);
	t_lst *c = ft_lstnew(1);
	t_lst *d = ft_lstnew(4);
	t_lst *e = ft_lstnew(5);

	ft_lstadd_back(&a, b);
	ft_lstadd_back(&a, c);
	ft_lstadd_back(&a, d);
	ft_lstadd_back(&a, e);
	printf("get_middle_by_bubble_sort(a) = %d\n", get_middle_by_bubble_sort(a));
	return (0);
}

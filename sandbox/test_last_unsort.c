#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

#include "../push_swap.h"

int	main()
{
	t_lst *a = ft_lstnew(5);
	t_lst *b = ft_lstnew(6);
	t_lst *c = ft_lstnew(122);
	t_lst *d = ft_lstnew(42);
	t_lst *e = ft_lstnew(60);
	t_lst *f = ft_lstnew(5);
	t_lst *g = ft_lstnew(6);
	t_lst *h = ft_lstnew(7);
	t_lst *i = ft_lstnew(1);
	t_lst *j = ft_lstnew(2);
	t_lst *k = ft_lstnew(3);
	t_lst *l = ft_lstnew(7);

	ft_lstadd_back(&a, b);
	ft_lstadd_back(&a, c);
	ft_lstadd_back(&a, d);
	ft_lstadd_back(&a, e);
	ft_lstadd_back(&a, f);
	ft_lstadd_back(&a, g);
	ft_lstadd_back(&a, h);
	ft_lstadd_back(&a, i);
	ft_lstadd_back(&a, j);
	ft_lstadd_back(&a, k);
	ft_lstadd_back(&a, l);
	printf("last_unsort(a) = %d\n", last_unsorted(a));
	return (0);
}

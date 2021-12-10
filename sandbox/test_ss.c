#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

#include "../push_swap.h"

int	main()
{
	t_lst *a = ft_lstnew(1);
	t_lst *b = ft_lstnew(2);
	t_lst *c = ft_lstnew(3);
	t_lst *d = ft_lstnew(4);
	ft_lstadd_back(&a, b);
	ft_lstadd_back(&c, d);
	printf("a->num = %d\n", a->num);
	printf("a->next->num = %d\n", a->next->num);
	printf("c->num = %d\n", c->num);
	printf("c->next->num = %d\n", c->next->num);
	ss(&a, &c);
	printf("a->num = %d\n", a->num);
	printf("a->next->num = %d\n", a->next->num);
	printf("c->num = %d\n", c->num);
	printf("c->next->num = %d\n", c->next->num);
	return (0);
}

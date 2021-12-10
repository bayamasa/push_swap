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

	// test lstdel_front
	ft_lstadd_back(&a, b);
	ft_lstadd_back(&b, c);
	printf("a->num = %d\n", a->num);
	printf("a->next->num = %d\n", a->next->num);
	printf("a->next->next->num = %d\n", a->next->next->num);
	ft_lstdel_front(&a);
	printf("a->num = %d\n", a->num);
	printf("a->next->num = %d\n", a->next->num);
	system("leaks a.out");
	return (0);
}

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

	ft_lstadd_back(&a, b);
	ft_lstadd_back(&a, c);
	printf("a->num = %d\n", a->num);
	printf("a->next->num = %d\n", a->next->num);
	printf("a->next->next->num = %d\n", a->next->next->num);
	rotate(a);
	printf("a->num = %d\n", a->num);
	printf("a->next->num = %d\n", a->next->num);
	printf("a->next->next->num = %d\n", a->next->next->num);
	return (0);
}

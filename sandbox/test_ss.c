#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

#include "../push_swap.h"

int	main()
{
	t_plist *a = ft_plstnew(1);
	t_plist *b = ft_plstnew(2);
	t_plist *c = ft_plstnew(3);
	t_plist *d = ft_plstnew(4);
	ft_plstadd_back(&a, b);
	ft_plstadd_back(&c, d);
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

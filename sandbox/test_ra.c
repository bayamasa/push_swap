#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

#include "../push_swap.h"

// test pa
int	main()
{
	t_plist *a = ft_plstnew(1);
	t_plist **b = (t_plist **)malloc(sizeof(t_plist *));


	// case 1 a = 1, b = empty
	// nothing done status true
	pa(&a, b);
	printf("a->num = %d\n", a->num);

	// case 2 a = empty, b = 1
	// a_stackが新規作成され、bはnull
	pa(b, &a);
	printf("(*b)->num = %d\n", (*b)->num);
	printf("a = %p\n", a);

	t_plist *c = ft_plstnew(2);
	t_plist *d = ft_plstnew(3);
	// case 3 a = 1, b = 1
	pa(&c, &d);
	printf("c->next->num = %d\n", c->num);
	printf("c->next->num = %d\n", c->next->num);
	printf("d = %p\n", d);

	t_plist *e = ft_plstnew(1);
	t_plist *f = ft_plstnew(2);
	t_plist *g = ft_plstnew(3);
	// case 4 a = 1, b = 2
	ft_plstadd_back(&f, g);
	printf("e->num = %d\n", e->num);
	printf("f->num = %d\n", f->num);
	printf("f->next->num = %d\n", f->next->num);
	pa(&e, &f);
	printf("e->num = %d\n", e->num);
	printf("e->next->num = %d\n", e->next->num);
	printf("f->num = %d\n", f->num);
	printf("f->next = %p\n", f->next);
	system("leaks a.out");
	return (0);
}

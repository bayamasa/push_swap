#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

#include "../push_swap.h"

int	main()
{
	t_plist *a = ft_plstnew(2);
	t_plist *b = ft_plstnew(3);
	t_plist *c = ft_plstnew(1);
	t_plist *d = ft_plstnew(4);
	ft_plstadd_back(&a, b);
	ft_plstadd_back(&a, c);
	ft_plstadd_back(&a, d);
	printf("min(a) = %d\n", min(a));
	return (0);
}

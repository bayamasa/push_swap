#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

#include "../push_swap.h"

void	printp(t_lst **stack)
{
	printf("stack = %p\n", stack);
	printf("*stack = %p\n", *stack);
}


int	main()
{
	t_lst *stack = NULL;
	printp(&stack);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

#include "../push_swap.h"

int main(int argc, char const *argv[])
{
	int *a;
	int i = 0;
	int status = 0;

	a = (int *)malloc(sizeof(int) * (argc - 1));
	while (i < argc - 1)
	{
		*(a + i) = (int)ft_atoi_error(argv[i + 1], &status);
		i++;
	}
	i = 0;
	while (i < argc - 1)
	{
		printf("*(a + i) = %d\n", *(a + i));
		i++;
	}

	return 0;
}


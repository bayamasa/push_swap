#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int	main()
{
	int a[1048576];
	int i = 0;
	while (i < 1048576)
	{
		a[i] = i;
		i++;
	}
	i = 0;
	while (i < 1048576)
	{
		printf("a[i] = %d\n", a[i]);
		i++;
	}

	return (0);
}

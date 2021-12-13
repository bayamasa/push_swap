#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

#include "../push_swap.h"

void	printp(t_lst **tmp)
{
	printf("tmp = %p\n", tmp);
	printf("*tmp = %p\n", *tmp);
}


// 初期化してないダブルポインタがどうなのかについて検証
// 参照すると、ダブルポインタもシングルポインタもポインタの値が初期化去れる。
int	main()
{
	t_lst *tmp;
	t_lst *null;
	char *a;

	null = NULL;
	printf("tmp = %p\n", tmp);
	printf("a = %p\n", a);
	printp(&tmp);
	printp(&null);
	return (0);
}

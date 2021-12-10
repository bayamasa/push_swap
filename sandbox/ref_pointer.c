#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
// ポインタに関するテスト
// シングルポインタを参照してダブルポインタを見たときの値はnextともともとの値だとことなっているのか
// →参照をしたとしてもダブルポインタの見ている値は同じ値になる。
// つけかえをしているから参照の値が一緒だっただけ &a と &(a->next)は異なる
#include "../ft_lst/ft_lst.h"

void	printp(t_lst **p)
{
	printf("p = %p\n", p);
	printf("(*p)->num = %d\n", (*p)->num);
}

void	check_ref(t_lst *a)
{
	printp(&a);
	// ここで付け替えているから参照しているポインタは同じになる。
	a = a->next;
	printp(&a);
}


int	main()
{
	t_lst *a = ft_lstnew(1);
	t_lst *b = ft_lstnew(2);
	t_lst *c = ft_lstnew(3);

	ft_lstadd_back(&a, b);
	ft_lstadd_back(&a, c);
	printf("before = %p\n", &a);
	a = a->next;
	printf("before = %p\n", &a);
	check_ref(a);
	return (0);
}

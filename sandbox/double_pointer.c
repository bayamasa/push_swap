#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
// シングルポインタで渡した後に内部でダブルポインタを制御した場合挙動は問題ないのか
// →シングルポインタで渡したときはmain関数のポインタの値は書き換わらないので、値が変わらなかった。
// 中の関数でダブルポインタを使うときは必ず引数もダブルポインタにしないと変更が反映されない。
#include "../push_swap.h"

void	push_arg_double_pointer(t_lst **a)
{
	ft_lstdel_front(a);
}

void	push_arg_single_pointer(t_lst *a)
{
	// ここで渡さられる&aは値渡しのポインタになるので、この関数が終わったらfreeされるポインタ
	// よってシングルポインタでの渡しは値を変更する場合のみでしか使用しては行けない。
	ft_lstdel_front(&a);
}

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

	push_arg_single_pointer(a);
	printf("a->num = %d\n", a->num);
	printf("a->next->num = %d\n", a->next->num);
	
	t_lst *a_ = ft_lstnew(1);
	t_lst *b_ = ft_lstnew(2);
	t_lst *c_ = ft_lstnew(3);

	ft_lstadd_back(&a_, b_);
	ft_lstadd_back(&a_, c_);

	push_arg_double_pointer(&a_);
	printf("a->num = %d\n", a_->num);
	printf("a->next->num = %d\n", a_->next->num);
	return (0);
}

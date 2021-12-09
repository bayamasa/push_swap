#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
// シングルポインタで渡した後に内部でダブルポインタを制御した場合挙動は問題ないのか
// →シングルポインタで渡したときはmain関数のポインタの値は書き換わらないので、値が変わらなかった。
// 中の関数でダブルポインタを使うときは必ず引数もダブルポインタにしないと変更が反映されない。
#include "../push_swap.h"

void	push_arg_double_pointer(t_plist **a)
{
	ft_plstdel_front(a);
}

void	push_arg_single_pointer(t_plist *a)
{
	// ここで渡さられる&aは値渡しのポインタになるので、この関数が終わったらfreeされるポインタ
	// よってシングルポインタでの渡しは値を変更する場合のみでしか使用しては行けない。
	ft_plstdel_front(&a);
}

int	main()
{
	t_plist *a = ft_plstnew(1);
	t_plist *b = ft_plstnew(2);
	t_plist *c = ft_plstnew(3);

	ft_plstadd_back(&a, b);
	ft_plstadd_back(&a, c);
	printf("a->num = %d\n", a->num);
	printf("a->next->num = %d\n", a->next->num);
	printf("a->next->next->num = %d\n", a->next->next->num);

	push_arg_single_pointer(a);
	printf("a->num = %d\n", a->num);
	printf("a->next->num = %d\n", a->next->num);
	
	t_plist *a_ = ft_plstnew(1);
	t_plist *b_ = ft_plstnew(2);
	t_plist *c_ = ft_plstnew(3);

	ft_plstadd_back(&a_, b_);
	ft_plstadd_back(&a_, c_);

	push_arg_double_pointer(&a_);
	printf("a->num = %d\n", a_->num);
	printf("a->next->num = %d\n", a_->next->num);
	return (0);
}

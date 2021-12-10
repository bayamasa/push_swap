#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

#include "../push_swap.h"
# define TEST(str) LINE; printf("TEST: %s = %s\n", #str, str); test_num_validation(str);
# define RESULT(bool) (bool ? printf("RESULT: TRUE\n") : printf("RESULT: FALSE\n"))
# define LINE printf("---------------------------\n")

void	test_num_validation(char const *str)
{
	int ret;
	int status;

	ret = (int)ft_atoi_error(str, &status);
	
	printf("ret = %d\n", ret);
	RESULT(status);
}

int main()
{
	int	status;
	int ret;
	char *plus = "+100";
	char *min = "-2147483648";
	char *over_min = "-2147483649";
	char *max = "2147483647";
	char *over_max = "2147483648";
	char *double_minus = "--1";
	char *double_plus = "++1";
	char *other_symbol = "&";
	char *num_and_symbol = "100-11";

	TEST(plus);
	TEST(min);
	TEST(over_min);
	TEST(max);
	TEST(over_max);
	TEST(double_minus);
	TEST(double_plus);
	TEST(other_symbol);
	TEST(num_and_symbol);

	return 0;
}


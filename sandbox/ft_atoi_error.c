/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:29:40 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/02 21:37:50 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <sys/types.h>
#include <stdbool.h>

static int	ft_isspace(char a)
{
	if (a == '\t' || a == '\n' || a == '\v'
		|| a == ' ' || a == '\r' || a == '\f' )
		return (1);
	return (0);
}

long long	ft_atoi(const char *str, int *status)
{
	size_t		i;
	long long	num;
	int			sign;

	num = 0;
	i = 0;
	sign = 1;
	if (!str)
		return (0);
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((num * 10 + (str[i] - '0')) / 10 != num)
			*status = false;
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return ((num * sign));
}

long long	ft_atoi_error(const char *str, int *status)
{
	long long	ret;

	*status = true;
	ret = ft_atoi(str, status);
	if (ret > INT_MAX || ret < INT_MIN)
	{
		*status = false;
	}
	return (ret);
}

#include <stdio.h>

int	main()
{
	char *a = "2147483647";
	int *status;

	*status = 0;

	printf("value = %lld, status = %d\n", ft_atoi_error(a, status), *status);
	char *b = "-2147483648";
	printf("value = %lld, status = %d\n", ft_atoi_error(b, status), *status);
	char *c = "9223372036854775807";
	printf("value = %lld, status = %d\n", ft_atoi_error(c, status), *status);
	char *d = "-9223372036854775808";
	printf("value = %lld, status = %d\n", ft_atoi_error(d, status), *status);
	char *e = "0";
	printf("value = %lld, status = %d\n", ft_atoi_error(e, status), *status);
	char *f = "2147483648";
	printf("value = %lld, status = %d\n", ft_atoi_error(f, status), *status);	
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:27:52 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/03 11:29:54 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

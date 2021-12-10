/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:27:52 by mhirabay          #+#    #+#             */
/*   Updated: 2021/12/10 10:53:04 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_error(const char *str, int *status)
{
	long long	ret;

	*status = true;
	ret = ft_strtoll(str, status);
	if (ret > INT_MAX || ret < INT_MIN)
	{
		*status = false;
		return (0);
	}
	return ((int)ret);
}

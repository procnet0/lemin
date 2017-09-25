/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbalart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 21:17:31 by vbalart           #+#    #+#             */
/*   Updated: 2017/05/29 12:24:03 by vbalart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int		ret;
	int		isneg;

	ret = 0;
	isneg = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\r'
			|| *str == '\v' || *str == '\f')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			isneg = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		ret = ret * 10 + *str - '0';
		str++;
	}
	return (ret * isneg);
}

long int	ft_atoli(const char *str)
{
	long int	ret;
	int			isneg;

	ret = 0;
	isneg = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\r'
			|| *str == '\v' || *str == '\f')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			isneg = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		ret = ret * 10 + *str - '0';
		str++;
	}
	return (ret * isneg);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbalart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:03:13 by vbalart           #+#    #+#             */
/*   Updated: 2017/05/19 20:59:54 by vbalart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_num_len(long int n)
{
	int		len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int			ft_num_len_base(long int n, int base)
{
	int		len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= base)
	{
		n = n / base;
		len++;
	}
	return (len);
}

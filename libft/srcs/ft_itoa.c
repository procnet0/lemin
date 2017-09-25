/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbalart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 14:14:21 by vbalart           #+#    #+#             */
/*   Updated: 2016/11/10 15:00:14 by vbalart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_nto_str(int n, int neg, int len, char *str)
{
	while (len >= 0)
	{
		str[len] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	if (neg < 0)
		str[0] = '-';
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		neg;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_num_len(n);
	str = (char *)ft_malloc_prot(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	len--;
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	neg = n;
	if (n < 0)
		n = -n;
	ft_nto_str(n, neg, len, str);
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbalart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:10:49 by vbalart           #+#    #+#             */
/*   Updated: 2016/11/10 11:48:43 by vbalart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char*)src;
	s2 = (unsigned char*)dst;
	if (len == 0 || dst == src)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (len > 0)
	{
		s2[len - 1] = s1[len - 1];
		len--;
	}
	return (s2);
}

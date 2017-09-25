/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbalart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:36:46 by vbalart           #+#    #+#             */
/*   Updated: 2016/11/09 13:10:33 by vbalart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned char	cc;
	size_t			i;

	i = 0;
	s1 = (unsigned char*)src;
	s2 = (unsigned char*)dst;
	cc = (unsigned char)c;
	while (i < n)
	{
		if ((*s2++ = *s1++) == cc)
			return (s2);
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbalart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 21:14:16 by vbalart           #+#    #+#             */
/*   Updated: 2016/11/10 21:17:36 by vbalart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	int			k;

	k = 0;
	i = 0;
	while (i < n)
	{
		if (s1[k] != s2[k])
			return ((unsigned char)s1[k] - (unsigned char)s2[k]);
		if (s1[k] == '\0' && s2[k] == '\0')
			return (0);
		k++;
		i++;
	}
	return (0);
}

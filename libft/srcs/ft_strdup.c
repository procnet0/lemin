/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbalart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:00:49 by vbalart           #+#    #+#             */
/*   Updated: 2016/11/08 18:14:00 by vbalart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*dup;

	i = 0;
	j = ft_strlen(src);
	dup = (char*)ft_malloc_prot(sizeof(*dup) * (j + 1));
	if (dup == NULL)
		return (NULL);
	while (i < j)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

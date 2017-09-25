/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbalart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 15:38:49 by vbalart           #+#    #+#             */
/*   Updated: 2016/11/09 15:44:39 by vbalart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*nstr;
	size_t	i;

	i = 0;
	nstr = (char *)ft_malloc_prot(sizeof(*nstr) * size + 1);
	if (nstr == NULL)
		return (NULL);
	while (i < size)
	{
		nstr[i] = '\0';
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}

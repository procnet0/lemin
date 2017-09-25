/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbalart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:11:39 by vbalart           #+#    #+#             */
/*   Updated: 2016/11/10 11:45:13 by vbalart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*nstr;
	unsigned int	i;

	if (s != NULL && f != NULL)
	{
		i = 0;
		nstr = ft_strnew(ft_strlen(s));
		if (nstr != NULL)
		{
			while (s[i] != '\0')
			{
				nstr[i] = f(s[i]);
				i++;
			}
			return (nstr);
		}
	}
	return (NULL);
}

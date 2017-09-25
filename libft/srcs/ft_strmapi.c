/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbalart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:35:19 by vbalart           #+#    #+#             */
/*   Updated: 2016/11/09 16:40:17 by vbalart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
				nstr[i] = f(i, s[i]);
				i++;
			}
			return (nstr);
		}
	}
	return (NULL);
}

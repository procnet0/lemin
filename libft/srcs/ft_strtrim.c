/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbalart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 13:04:49 by vbalart           #+#    #+#             */
/*   Updated: 2016/11/10 18:55:15 by vbalart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isblank(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char		*ft_strtrim(char const *s)
{
	int		i;
	char	*str;

	str = NULL;
	if (!s)
		return (NULL);
	while (*s && ft_isblank(*s))
		s++;
	i = ft_strlen(s) - 1;
	if (i > 0)
	{
		while (s[i] && ft_isblank(s[i]))
			i--;
	}
	str = ft_strsub(s, 0, i + 1);
	return (str);
}

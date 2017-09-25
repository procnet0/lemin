/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbalart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 13:34:57 by vbalart           #+#    #+#             */
/*   Updated: 2016/11/10 21:32:08 by vbalart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_line(char const *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (*s != '\0')
	{
		if (j == 1 && *s == c)
			j = 0;
		if (j == 0 && *s != c)
		{
			i++;
			j = 1;
		}
		s++;
	}
	return (i);
}

static int		ft_word_len(char const *s, char c)
{
	int		i;

	i = 0;
	while (*s != c && *s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		word;

	i = 0;
	if (!s)
		return (0);
	word = ft_count_line(s, c);
	tab = (char **)ft_malloc_prot(sizeof(*tab) * (word + 1));
	if (tab == NULL)
		return (NULL);
	while (word--)
	{
		while (*s == c && *s != '\0')
			s++;
		tab[i] = ft_strsub(s, 0, ft_word_len(s, c));
		s = s + ft_word_len(s, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_prot.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbalart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 20:59:09 by vbalart           #+#    #+#             */
/*   Updated: 2017/05/19 20:59:26 by vbalart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_malloc_prot(size_t size)
{
	void	*ptr;

	ptr = NULL;
	ptr = malloc(size);
	if (ptr == NULL)
		exit(2);
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linear_interpolation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbalart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 19:39:35 by vbalart           #+#    #+#             */
/*   Updated: 2017/02/16 19:40:10 by vbalart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_lerp(double x, double y, double p)
{
	if (x == y)
		return (x);
	return (x + (y - x) * p);
}

int		ft_lerpi(int x, int y, double p)
{
	if (x == y)
		return (x);
	return ((int)((double)x + (y - x) * p));
}

double	ft_ilerp(double first, double second, double val)
{
	if (val == first)
		return (0.0);
	if (val == second)
		return (1.0);
	return ((val - first) / (second - first));
}

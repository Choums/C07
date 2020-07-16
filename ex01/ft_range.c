/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caidel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 16:48:51 by caidel            #+#    #+#             */
/*   Updated: 2020/07/16 10:56:24 by caidel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*pt;
	int	i;
	int	s;

	if (min >= max)
	{
		pt = NULL;
		return (pt);
	}
	s = max - min;
	if (!(pt = (int*)malloc(sizeof(*pt) * s)))
		return (0);
	i = 0;
	while (i < s)
		pt[i++] = min++;
	return (pt);
}

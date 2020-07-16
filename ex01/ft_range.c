/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caidel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 16:48:51 by caidel            #+#    #+#             */
/*   Updated: 2020/07/15 18:21:52 by caidel           ###   ########.fr       */
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
	pt = malloc(sizeof(pt) * s);
	i = 0;
	while (i < s)
		pt[i++] = min++;
	return (pt);
}

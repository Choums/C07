/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caidel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 20:50:13 by caidel            #+#    #+#             */
/*   Updated: 2020/07/16 17:50:01 by caidel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int s;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	s = max - min;
	if (!(*range = (int*)malloc(s * sizeof(**range))))
		return (-1);
	i = 0;
	while (i < s)
		range[0][i++] = min++;
	return (**range);
}
